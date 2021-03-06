#include "engine/script_bindings.h"

#include "engine/component.h"
#include "engine/component_factory.h"
#include "engine/engine.h"
#include "engine/entity.h"
#include "engine/game_state.h"
#include "engine/serialization.h"
#include "engine/system.h"
#include "engine/touchable.h"
#include "engine/rng.h"
#include "scripting/luabind.h"


luabind::scope
thrive::EngineBindings::luaBindings() {
    return (
        StorageContainer::luaBindings(),
        StorageList::luaBindings(),
        System::luaBindings(),
        Component::luaBindings(),
        ComponentFactory::luaBindings(),
        Entity::luaBindings(),
        Touchable::luaBindings(),
        GameState::luaBindings(),
        Engine::luaBindings(),
        RNG::luaBindings()
    );
}
