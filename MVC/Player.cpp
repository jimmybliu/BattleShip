//
// Created by mfbut on 3/9/2019.
//

#include "Player.h"

int BattleShip::Player::num_instances = 0;

BattleShip::Player::Player(const BattleShip::GameAttributes &gameAttributes, BattleShip::View &view) {

}

const std::string &BattleShip::Player::getName() const {
    return <#initializer#>;
}

void BattleShip::Player::setName(const std::string &name) {

}

const BattleShip::Board &BattleShip::Player::getBoard() const {
    return <#initializer#>;
}

BattleShip::Board &BattleShip::Player::getBoard() {
    return <#initializer#>;
}

const int BattleShip::Player::getId() const {
    return 0;
}

bool BattleShip::Player::operator==(const BattleShip::Player &rhs) const {
    return false;
}

bool BattleShip::Player::operator!=(const BattleShip::Player &rhs) const {
    return false;
}

bool BattleShip::Player::allShipsSunk() const {
    return false;
}

BattleShip::AttackResult BattleShip::Player::fireAt(int row, int col) {
    return BattleShip::AttackResult(false, false, 0);
}

BattleShip::Player &BattleShip::Player::getOpponent() {
    return <#initializer#>;
}

const BattleShip::Player &BattleShip::Player::getOpponent() const {
    return <#initializer#>;
}

void BattleShip::Player::setOpponent(BattleShip::Player &opponent) {

}

bool BattleShip::Player::hit(char shipChar) {
    return false;
}
