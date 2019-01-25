#ifndef ENTT_ENTITY_POLICY_HPP
#define ENTT_ENTITY_POLICY_HPP


namespace entt {


template<typename...>
struct policy {};


using no_policy_t = policy<void>;
using group_policy_t = policy<>;


constexpr no_policy_t no_policy;
constexpr group_policy_t group_policy;


}


#endif // ENTT_ENTITY_POLICY_HPP
