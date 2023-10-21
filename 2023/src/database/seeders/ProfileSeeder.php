<?php

namespace Database\Seeders;

use App\Models\Profile;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;

class ProfileSeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        //
        $profiles = [
            'id' => 1,
            'company_name' => 'ueu',
            'address' => 'jalan terus'
        ];

        Profile::insert($profiles);
    }
}
