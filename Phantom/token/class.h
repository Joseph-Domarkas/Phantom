

# ifndef Phantom__token__class_guard_
	
	# define Phantom__token__class_guard_
	
	# include <Phantom/type.h>
	
	
	typedef
	structure Phantom__token__store_structure_
	
	{
		
		character * name, * value, * type;
		
	}
	
	Phantom__token__store_class_;
	
	typedef
	structure Phantom__token_structure_
	
	{
		
		Phantom__token__store_class_ store [128];
		Phantom__Integer size, gap [128];
		
		
		void
		(* create_method_)
		
		(
			structure Phantom__token_structure_ * token,
			structure Phantom__token__store_structure_ store
		);
		
		
		void
		(* destroy_method_)
		
		(
			structure Phantom__token_structure_ * token,
			structure Phantom__token__store_structure_ store
		);
		
		
		void
		(* create_method__standard_)
		
		(
			structure Phantom__token_structure_ * token
		);
		
		
		void
		(* store_print_method_)
	
		(
			structure Phantom__token_structure_ * token
		);

	}
	
	Phantom__token_class_;
	
# endif /* Phantom__token__class_guard_; */

