
#pragma once
#include <chrono>

namespace
{
	// delays x seconds in runtime
	auto delay(double x)->void
	{
		auto ti{ std::chrono::steady_clock::now() };
		do {} while (std::chrono::duration<double>(std::chrono::steady_clock::now() - ti).count() <= x);
	}
}
