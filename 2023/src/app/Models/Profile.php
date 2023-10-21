<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Profile extends Model
{
    //
    protected $connection = 'mysql';

    protected $fillable = [
        'company_name',
        'address'
    ];

    protected $hidden = [
        'created_at',
        'updated_at'
    ];
}
