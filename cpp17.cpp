#include "foo_lib.h"
#include "fold_expressions.h"
#include "structure_bindings.h"
#include "if_init_statement.h"
#include "constexpr_if.h"

int main(int argc, char const *argv[])
{
	// Enabling header-only libraries with inline variable
	std::cout << process_monitor::standard_string << std::endl;

	fold_expressions();
	structure_bindings();
	if_init_statement();
	constexpr_if();

	return 0;
}