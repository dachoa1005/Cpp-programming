#include <iostream>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
using namespace std;

int main(){
    pid_t child_pid;
    child_pid = fork();
    if (child_pid < 0) 
    {
        cout << "fork fail" << endl;
        return 1;
    } else if (child_pid ==  0)
    {
        // child process
        cout << "child process created succes" << endl;
        cout << "child_PID = " << getpid() << ", parent_PID = " << getppid() << endl;
        return -10;
    } else {
        wait(0); // wait for child process to finish
        kill(getpid(), SIGKILL); //terminate parent process, end program.
        cout << "parent process created succes" << endl;
        cout << "PID = " << getpid() << endl;
    }
    return 0;
}