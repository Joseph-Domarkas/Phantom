

# ifndef Phantom__class_guard_

	# define Phantom__class_guard_
	
	# include <Phantom/type.h>
	# include <Phantom/token.h>
	
	
	typedef
	struct Phantom_structure_
	
	{
		
		Phantom__token_class_ token;
		
		void (* create_method_) (structure Phantom_structure_ * Phantom);
		void (* destroy_method_) (structure Phantom_structure_ * Phantom);
		
		void (* nexus_method_) (structure Phantom_structure_ * Phantom);
		
	}
	
	Phantom_class_;

# endif /* Phantom__class_guard_; */

