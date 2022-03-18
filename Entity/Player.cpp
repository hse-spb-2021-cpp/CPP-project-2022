#include "Player.h"

Player::Player(float x, float y, sf::Texture &texture) {
    initVariables();
    initComponents();

    setTexture(texture);
    setPosition(x, y);
    sprite.setOrigin(512/2,397/2);
    sprite.setScale(0.25,0.25);
}

void Player::initVariables() {

}

void Player::initComponents() {
    createMovementComponent(1000.f, 1000.f);
}
