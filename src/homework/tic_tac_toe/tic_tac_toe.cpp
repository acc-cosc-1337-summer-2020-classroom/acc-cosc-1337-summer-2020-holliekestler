//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over() {
    if (check_row_win() || check_column_win() || check_diagonal_win()) {
        set_winner();
        return true;
    } else if (check_board_full()) {
        winner = "C";
        return true;
    } else {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
}

std::string TicTacToe::get_player() const { return player; }

void TicTacToe::display_board() const {
    for (std::size_t i = 0; i < pegs.size(); i += 3) {
        std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}

bool TicTacToe::check_column_win() {
    if (pegs[0] != " " && pegs[3] != " " && pegs[6] != " ") {
        if (pegs[0] == pegs[3] && pegs[3] == pegs[6]) {
            return true;
        }
    }
    if (pegs[1] != " " && pegs[4] != " " && pegs[7] != " ") {
        if (pegs[1] == pegs[4] && pegs[4] == pegs[7]) {
            return true;
        }
    }
    if (pegs[2] != " " && pegs[5] != " " && pegs[8] != " ") {
        if (pegs[2] == pegs[5] && pegs[5] == pegs[8]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win() {
    if (pegs[0] != " " && pegs[1] != " " && pegs[2] != " ") {
        if (pegs[0] == pegs[1] && pegs[1] == pegs[2]) {
            return true;
        }
    }
    if (pegs[3] != " " && pegs[4] != " " && pegs[5] != " ") {
        if (pegs[3] == pegs[4] && pegs[4] == pegs[5]) {
            return true;
        }
    }
    if (pegs[6] != " " && pegs[7] != " " && pegs[8] != " ") {
        if (pegs[6] == pegs[7] && pegs[7] == pegs[8]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() {
    if (pegs[0] != " " && pegs[4] != " " && pegs[8] != " ") {
        if (pegs[0] == pegs[4] && pegs[4] == pegs[8]) {
            return true;
        }
    }
    if (pegs[6] != " " && pegs[4] != " " && pegs[2] != " ") {
        if (pegs[6] == pegs[4] && pegs[4] == pegs[2]) {
            return true;
        }
    }
    return false;
}

void TicTacToe::set_winner() {
    if (player == "X") {
        winner = "O";
    } else {
        winner = "X";
    }
}

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}


bool TicTacToe::check_board_full() const {
    for (auto peg: pegs) {
        if (peg == " ") {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board() {
    for (std::size_t i = 0; i < pegs.size(); ++i) {
        pegs[i] = " ";
    }
}

std::string TicTacToe::get_winner() {
    return winner;
}
