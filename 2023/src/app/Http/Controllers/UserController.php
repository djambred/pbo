<?php

namespace App\Http\Controllers;

use App\Models\User;
use Illuminate\Http\Request;
use Illuminate\Support\Carbon;
use Illuminate\Support\Facades\DB;


class UserController extends Controller
{
    /**
     * Display a listing of the resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function index()
    {
        //
        //$user = DB::connection('mysql')->table('users')->get();
        $user = User::get();
        return response()->json($user);

    }

    /**
     * Show the form for creating a new resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function create(Request $request)
    {
        //
        $timestamp = \Carbon\Carbon::now()->toDateTimeString();
        $this->validate($request, [
            'username' => 'required',
        ]);

        $request['created_at'] = $timestamp;
        $request['updated_at'] = $timestamp;

        $user = DB::connection('mysql')->table('users')->insert($request->all());



        return response()->json(response("Berhasil ditambahkan"));
    }

    /**
     * Store a newly created resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @return \Illuminate\Http\Response
     */
    public function store(Request $request)
    {
        //
    }

    /**
     * Display the specified resource.
     *
     * @param  \App\Models\User  $user
     * @return \Illuminate\Http\Response
     */
    public function show($id)
    {
        //
        $user = DB::connection('mysql')->table('users')->where('id', $id)->first();
        return response()->json($user);
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param  \App\Models\User  $user
     * @return \Illuminate\Http\Response
     */
    public function edit($id)
    {
        //
        $user = DB::connection('mysql')->table('users')->where('id', $id)->get();
        return response()->json(" EDIT $user");
    }

    /**
     * Update the specified resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  \App\Models\User  $user
     * @return \Illuminate\Http\Response
     */
    public function update(Request $request, $id)
    {
        //
        $timestamp = Carbon::now()->toDateTimeString();
        $request['updated_at'] = $timestamp;
        $user = DB::connection('mysql')->table('users')->where('id', $id)->update($request->all());
        return response()->json("Berhasil Update Data $user");
    }

    /**
     * Remove the specified resource from storage.
     *
     * @param  \App\Models\User  $user
     * @return \Illuminate\Http\Response
     */
    public function destroy($id)
    {
        //
        $user = DB::connection('mysql')->table('users')->where('id', $id)->delete();
        return response()->json("Berhasil Hapus $user");
    }
}
