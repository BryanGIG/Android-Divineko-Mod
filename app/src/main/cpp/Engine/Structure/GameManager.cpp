#include "../Includes.hpp"


uintptr_t isTrailer;
uintptr_t displayCheatButtons;

void (*ApplyPlayerLoadedValues)(GameManager *, PlayerData *data);

void new_ApplyPlayerLoadedValues(GameManager *self, PlayerData *data) {
    if (data != nullptr) {
        data->setCheat();
    }

    ApplyPlayerLoadedValues(self, data);
}

void GameManager::Initialize() {
    setPointer(ApplyPlayerLoadedValues, "ApplyPlayerLoadedValues", 1);
}

void GameManager::Hook() {
    setHook(ApplyPlayerLoadedValues, "ApplyPlayerLoadedValues")
}

const char *GameManager::getAssembly() {
    return "Assembly-CSharp.dll";
}

const char *GameManager::getNamespace() {
    return "";
}

const char *GameManager::getClass() {
    return "GameManager";
}