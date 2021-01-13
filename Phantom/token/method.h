

# ifndef Phantom__token__method_guard_
	
	# define Phantom__token__method_guard_
	
	# include <Phantom/token/class.h>
	
	
	void
	Phantom__token__create_method_
	
	(
		structure Phantom__token_structure_ * token,
		structure Phantom__token__store_structure_ store
	);
	
	
	void
	Phantom__token__destroy_method_
	
	(
		structure Phantom__token_structure_ * token,
		structure Phantom__token__store_structure_ store
	);
	
	
	void
	Phantom__token__create_method__standard_
	
	(
		structure Phantom__token_structure_ * token
	);
	
	
	void
	Phantom__token__store_print_method_
	
	(
		structure Phantom__token_structure_ * token
	);
	
# endif /* Phantom__token__method_guard_; */

