#include <iostream>
#include <iomanip>
#include "gridmanagement.h"

#include "detail.h" //nos types
#include "parameter.h" //nos parametres

void FirstMap1v1 (CMat & Mat)
{
    Mat = {
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " "},
            { " ", " ", " ", " ", "╚", "═", "═", "═", "═", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╠", " ", " ", " ", "╣", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "═", "═", "═", "═", "╝", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", "═", "═", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "═", "═", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", "║", " ", "║", " ", " ", " ", " ", "╔", "═", "═", "═", " ", " ", " ", "═", "═", "═", "╗", " ", " ", " ", " ", "║", " ", "║", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", "║", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", "║", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", "║", " ", "║", " ", " ", " ", " ", "╚", "═", "═", "═", " ", " ", " ", "═", "═", "═", "╝", " ", " ", " ", " ", "║", " ", "║", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", "═", "═", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "═", "═", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", "╔", "═", "═", "═", "═", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╠", " ", " ", " ", "╣", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "═", "═", "═", "═", "╗", " ", " ", " ", " "},
            { " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        };
}

void SecondMap1v1 (CMat & Mat)
{
    Mat = {
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╣", " ", "╠", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "╔", "═", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", "═", "╗", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", "═", "═", "═", "╗", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", "═", "═", "═", "╝", " ", " ", " ", " ", " ", "╚", "═", "═", "═", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", "╔", "═", "═", "═", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", "═", "═", "═", "╝", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", "═", "═", "═", "╗", " ", " ", " ", " ", " ", "╔", "═", "═", "═", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", "╚", "═", "═", "═", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "╚", "═", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", "═", "╝", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╣", " ", "╠", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
       };
}

void ThirdMap1v1 (CMat & Mat)
{
    Mat = {
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╠", " ", " ", " ", "╣", "╝", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", "═", "═", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "═", "═", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", "╔", "═", "═", "═", "═", "═", "╗", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", "═", "╦", " ", "╔", "╝", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", "╔", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", "╗", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", "╚", "╗", " ", "╦", "═", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", "═", "╩", " ", "╚", "╗", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", "╚", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", "╝", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", "╔", "╝", " ", "╩", "═", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", " ", " ", " ", "╚", "═", "═", "═", "═", "═", "╝", " ", " ", " ", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", "═", "═", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "═", "═", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╠", " ", " ", " ", "╣", "╗", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        };
}

void FirstMapSolo (CMat & Mat)
{
    Mat = {
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╣", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╠", "╬", "╣", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╠", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", "╔", "═", " ", " ", " ", " ", " ", "╚", "═", "═", "═", "╝", " ", " ", " ", " ", " ", "╚", "═", " ", " ", "╚", "═", "╝", " ", " ", "═", "╝", " ", " ", " ", " ", " ", "╚", "═", "═", "═", "╝", " ", " ", " ", " ", "═", "╗", " ", " ", " "},
            { " ", " ", " ", "║", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", "╚", "═", " ", " ", " ", " ", "╔", "═", "═", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "═", "═", "═", "╗", " ", " ", " ", " ", " ", " ", " ", " ", "═", "═", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", "╔", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╗", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", "═", "═", "╗", " ", " "},
            { " ", "═", "═", "╝", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╣", " ", " ", " ", " ", "╚", "╗", " ", "╦", " ", "╔", "╝", " ", " ", " ", " ", "╠", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", "═", "╗", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " "},
            { " ", "═", "═", "╗", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╣", " ", " ", " ", " ", "╔", "╝", " ", "╩", " ", "╚", "╗", " ", " ", " ", " ", "╠", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", "═", "╝", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", "╚", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╝", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", "═", "═", "╝", " ", " "},
            { " ", " ", " ", " ", " ", " ", "╔", "═", " ", " ", " ", " ", "╚", "═", "═", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "═", "═", "═", "╝", " ", " ", " ", " ", " ", " ", " ", " ", "═", "═", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", "║", " ", " ", "║", " ", " ", "╔", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╗", " ", " ", " ", " ", "║", " ", " ", " "},
            { " ", " ", " ", "╚", "═", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", " ", "═", "═", "╝", " ", " ", " ", " ", " ", "╔", "═", "═", "═", "╗", " ", " ", " ", " ", " ", "╚", "═", "═", " ", " ", " ", " ", "╚", "╝", " ", " ", " ", "═", "╝", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", "║", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
            { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        };
}

void SecondMapSolo (CMat & Mat)
{
    Mat = {
        { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╠", " ", "╦", " ", "╣", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", " ", " ", " ", "╗", " ", "╔", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", "╠", " ", "╬", " ", "╣", " ", " ", " ", " "},
        { " ", " ", " ", "╚", "╗", " ", "╚", "═", "╝", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", "═", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "═", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", "╔", "═", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", " ", " ", " ", "╔", "═", "╗", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", "╔", "═", "╗", " ", " ", " ", " ", " "},
        { " ", "═", " ", " ", " ", " ", "╝", " ", "╚", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", "╔", "╝", " ", "╚", "╗", " ", "╚", "═", " "},
        { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        { " ", "═", " ", " ", " ", " ", "╗", " ", "╔", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", "╚", "╗", " ", "╔", "╝", " ", "╔", "═", " "},
        { " ", " ", " ", " ", " ", " ", "╚", "═", "╝", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", "╚", "═", "╝", " ", " ", " ", " ", " "},
        { " ", " ", " ", "╚", "╗", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", "╔", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "╗", " ", " ", " ", " ", "╚", "═", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", "╔", "╝", " ", "╔", "═", "╗", " ", "╚", "╗", " ", " ", " ", " ", " ", " ", "═", "╝", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╚", "═", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╦", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", " ", " ", " ", "╝", " ", "╚", " ", " ", " ", " ", "╬", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╬", " ", " ", "╠", " ", "╬", " ", "╣", " ", " ", " ", " "},
        { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╠", " ", "╩", " ", "╣", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "╩", " ", " ", " ", " ", " ", " "},
        { " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    };
}
