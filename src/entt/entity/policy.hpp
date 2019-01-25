#ifndef ENTT_ENTITY_POLICY_HPP
#define ENTT_ENTITY_POLICY_HPP


namespace entt {


template<typename...>
struct policy {};


using no_policy = policy<void>;
using group_policy = policy<>;


}


#endif // ENTT_ENTITY_POLICY_HPP
