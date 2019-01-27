#ifndef ENTT_ENTITY_POLICY_HPP
#define ENTT_ENTITY_POLICY_HPP


namespace entt {


template<typename...>
struct policy {};


constexpr policy<> group_policy{};


template<typename... Type>
constexpr policy<Type...> induce_policy{};


}


#endif // ENTT_ENTITY_POLICY_HPP
