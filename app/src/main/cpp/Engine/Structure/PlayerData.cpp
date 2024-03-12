#include "../Includes.hpp"

uintptr_t playerCurrencyAmount;

void PlayerData::setCheat() {
    int money = 99999999;
    if (Il2Cpp::GetField<int>(this, playerCurrencyAmount) < money) {
        Il2Cpp::SetField<int>(this, playerCurrencyAmount, money);
    }
}

void PlayerData::Initialize() {
    setFieldOffset(playerCurrencyAmount, "playerCurrencyAmount");
}

void PlayerData::Hook() {
}

const char *PlayerData::getAssembly() {
    return "Assembly-CSharp.dll";
}

const char *PlayerData::getNamespace() {
    return "";
}

const char *PlayerData::getClass() {
    return "PlayerData";
}