#pragma once

namespace jmath {

static constexpr inline int __Internal_GetNegativeCount() { return 0; }

template<typename T, typename... TNumbers>
static constexpr inline int __Internal_GetNegativeCount(const T& N, const TNumbers&... Numbers)
{
	if(N < T{0})
	{
		return __Internal_GetNegativeCount(Numbers...) + 1;
	}
	return __Internal_GetNegativeCount(Numbers...);
}

template<typename... TNumbers>
static constexpr inline int GetNegativeCount(const TNumbers&... Numbers)
{
	return __Internal_GetNegativeCount(Numbers...);
}

}