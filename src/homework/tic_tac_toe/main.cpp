#include "tic_tac_toe.h"

int main() {
    TicTacToe tic_tac_toe;
    std::string player;
    std::string choice;

    do {
        std::cout << "Enter X or O: ";
        std::cin >> player;

        if (player != "X" && player != "O") {
            std::cout << "You can only choose X or O." << '\n';
        }
    } while (player != "X" && player != "O");

    tic_tac_toe.start_game(player);

    do {
        int position;
        std::cout << "Enter position from 1 to 9: ";
        std::cin >> position;
        tic_tac_toe.mark_board(position);
        tic_tac_toe.display_board();

    } while (!tic_tac_toe.game_over());

    std::cout << "Game over. ";
    std::cout << "The winner is: " << tic_tac_toe.get_winner() << "!" << '\n';

    std::cout << "Would you like to play again? If so, enter y or Y: ";
    std::cin >> choice;
}