#include <iostream>
#include <mysql/mysql.h>
#include <sstream>

using namespace std;


const char* hostname = "192.168.45.140";
const char* user = "root";
const char* pass = "p455w0rd";
const char* dbname = "go_echo";
unsigned int port = 23306;
const char* unixsocket = NULL;
unsigned long clientflag = 0;

MYSQL* connectdb(){
    MYSQL * conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, hostname, user, pass, dbname, port, unixsocket, clientflag);
    if (conn) {
        cout<< "berhasil"<<endl;
        return conn;
    } else {
        cout<< "gagal"<<endl;
        return conn;
    }
}

// void createDatabase(MYSQL* conn){
//     string db;
//     stringstream ss, sss, ssss;
//     cout<<"input nama databasenya: \n";
//     cin >> db;
//     ss << "CREATE DATABASE "+db+" ";
//     string query = ss.str();
//     const char* q = query.c_str();
//     int qstate = mysql_query(conn, q);
//     if(qstate==0){
//         cout<<"berhasil create db\n";
//     }else if (qstate ==0)
//     {
//         sss << "DROP DATABASE IF EXISTS "+db+" ";
//         string query = sss.str();
//         const char* q = query.c_str();
//         int qstate = mysql_query(conn, q);
//         cout<<"berhasil drop\n";
//     }else{
//         ssss << "CREATE DATABASE "+db+" ";
//         string query = ssss.str();
//         const char* q = query.c_str();
//         int qstate = mysql_query(conn, q);
//         cout<<"create ulang database\n";
//     }
    
// }

void dropDatabase(MYSQL* conn){
    string db;
    stringstream ss;
    cout<<"input nama tablenya: \n";

}

void insertData(MYSQL* conn){
    int qstate =0;
    stringstream inserttodb;
    string nim, nama;
    cout << "insert NIM : "<<endl;
    cin>>nim;
    cout << "insert Nama : "<<endl;
    cin>>nama;
    inserttodb << "INSERT INTO mahasiswa (nim, nama) VALUES ('"+nim+"','"+nama+"')";
    string query = inserttodb.str();
    const char* q = query.c_str();
    qstate = mysql_query(conn, q);
    if (qstate == 0){
        cout <<"berhasil insert"<<endl;
    } else {
        cout <<"gagal"<<endl;
    }
}


void displayData(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES* res;

    if (conn){
        int qstate = mysql_query(conn, "SELECT * FROM mahasiswa");
        if(!qstate){
            res = mysql_store_result(conn);
            int count = mysql_num_fields(res);
            cout << "==============LIST DATA==============\n";
            cout <<"\tID\tNIM\tNAMA\n";
            while(row = mysql_fetch_row(res)){
                for(int i=0; i<count;i++){
                    cout <<"\t"<<row[i];
                }
                cout<<endl;
            }

        }
    } else {
        cout << "gagal" <<endl;
    }
}

void updateData(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES* res;
    string id;
    cout << "enter id : "<<endl;
    cin >> id;
    stringstream ss, sss;
    sss << "SELECT * FROM mahasiswa WHERE id = '"+id+"' ";
    string query = sss.str();
    const char* q = query.c_str();
    mysql_query(conn, q);
    res = mysql_store_result(conn);
    int count = mysql_num_fields(res);
    my_ulonglong x = mysql_num_rows(res);
    string nim, nama;
    if(x>0){
        //ss <<"DELETE FROM mahasiswa WHERE id = '"+id+"' ";
        cout << "insert NIM : "<<endl;
        cin>>nim;
        cout << "insert Nama : "<<endl;
        cin>>nama;
        ss <<"UPDATE mahasiswa SET nim = '"+nim+"', nama= '"+nama+"' WHERE id = '"+id+"' ";
        string query = ss.str();
        const char* q = query.c_str();
        mysql_query(conn, q);
    }else{
        cout<<"error\n";
    }

}



void deleteData(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES* res;
    string id;
    cout << "enter id : "<<endl;
    cin >> id;
    stringstream ss, sss;
    sss << "SELECT * FROM mahasiswa WHERE id = '"+id+"' ";
    string query = sss.str();
    const char* q = query.c_str();
    mysql_query(conn, q);
    res = mysql_store_result(conn);
    int count = mysql_num_fields(res);
    my_ulonglong x = mysql_num_rows(res);

    if(x>0){
        ss <<"DELETE FROM mahasiswa WHERE id = '"+id+"' ";
        string query = ss.str();
        const char* q = query.c_str();
        mysql_query(conn, q);
    }else{
        cout<<"error\n";
    }

}

int main(){
    MYSQL* conn = connectdb();
    //createDatabase(conn);
    insertData(conn);
    //displayData(conn);
    //deleteData(conn);
    //updateData(conn);
    displayData(conn);
    return 0;
}