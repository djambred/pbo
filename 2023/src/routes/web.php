<?php

use App\Http\Controllers\UserController;
/** @var \Laravel\Lumen\Routing\Router $router */

/*
|--------------------------------------------------------------------------
| Application Routes
|--------------------------------------------------------------------------
|
| Here is where you can register all of the routes for an application.
| It is a breeze. Simply tell Lumen the URIs it should respond to
| and give it the Closure to call when that URI is requested.
|
*/

$router->get('/', function () use ($router) {
    return $router->app->version();
});

$router->group(['prefix' => 'api/users'], function() use ($router){
    $router->get('/', ['uses' => 'UserController@index']);
    $router->post('/', ['uses' => 'UserController@create']);
    $router->put('/{id}', ['uses' => 'UserController@update']);
    $router->get('/{id}', ['uses' => 'UserController@show']);
    $router->delete('/{id}', ['uses' => 'UserController@destroy']);
});
$router->group(['prefix' => 'api/profile'], function() use($router){
    $router->get('/', ['uses' => 'ProfileController@index']);
    $router->post('/', ['uses' => 'ProfileController@create']);
    $router->get('/{id}', ['uses' => 'ProfileController@show']);
    $router->delete('/{id}', ['uses' => 'ProfileController@destroy']);
    $router->put('/{id}', ['uses' => 'ProfileController@update']);
});
