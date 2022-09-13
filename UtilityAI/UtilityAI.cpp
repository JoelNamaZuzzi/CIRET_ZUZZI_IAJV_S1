#include "Header.h"

int main()
{
    cout << "Hello World!\n";
    GameManager init;
    init.Init();

    if (init.start.WhoStartRandomiser() == 1) {
        cout << "Youre 1st \n";
        init.turn.PlayerTurn(1);
    }
    else {
        cout << "Youre 2nd \n";
        init.turn.PlayerTurn(0);
    }

}

