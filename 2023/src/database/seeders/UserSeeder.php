<?php

namespace Database\Seeders;

use App\Model\User;
use Illuminate\Support\Str;
use Illuminate\Support\Carbon;
use Illuminate\Database\Seeder;
use Illuminate\Support\Facades\DB;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;

class UserSeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        //
        $timestaps = Carbon::now()->toDateTimeString();
        DB::table('users')->insert(
            [
                'username' => 'client',
                'password' => Str::random(40),
                'created_at' => $timestaps,
                'updated_at' => $timestaps
            ]
        );
    }
}
