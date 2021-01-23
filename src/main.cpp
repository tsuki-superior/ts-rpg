#include "main.hpp"

int main(int argc, char *argv)
{
}

MainGame::MainGame()
{
    ctx=duk_create_heap_default();
    if (ctx)
    {
        cout << "Duktape Context Created.";
    }else{
        cerr << "Duktape Context Failed to create.";
        exit(-1);
    }

}