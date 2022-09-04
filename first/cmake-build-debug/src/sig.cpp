//
// Created by ibm on 2022/3/14.
//

#include "sig.h"
#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}
