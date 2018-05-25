/******************************
  Program "nwmodel.m" compiled by "DiNo Release 1.1"

  DiNo Last Compiled date: "May 11 2018"
 ******************************/

/********************
  Parameter
 ********************/
#define DINO_VERSION "DiNo Release 1.1"
#define MURPHI_DATE "May 11 2018"
#define PROTOCOL_NAME "nwmodel"
#define DOMAIN_FILENAME "nwmodel.pddl"
#define PROBLEM_FILENAME "nwmodelquest.pddl"
#define DISCRETIZATION 1.000000
#define VAL_PATHNAME "/home/aditya/DiNo/src/DiNo/../VAL-master/validate"
#define BITS_IN_WORLD 2803
#define HASHC
#define HAS_CLOCK
const char * const modelmessages[] = { " Time Discretisation = 1.000000"," Digits for representing the integer part of a real =  5.000000"," Digits for representing the fractional part of a real =  4" };
const int modelmessagecount = 3;

/********************
  Include
 ********************/
#include "upm_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_real_type: public mu__real
{
 public:
  inline double operator=(double val) { return mu__real::operator=(val); };
  inline double operator=(const mu_1_real_type& val) { return mu__real::operator=((double) val); };
  mu_1_real_type (const char *name, int os): mu__real(9,4,48,name, os) {};
  mu_1_real_type (void): mu__real(9,4,48) {};
  mu_1_real_type (double val): mu__real(9,4,48,"Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%le",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of real decl ***/
mu_1_real_type mu_1_real_type_undefined_var;

class mu_1_integer: public mu__long
{
 public:
  inline int operator=(int val) { return mu__long::operator=(val); };
  inline int operator=(const mu_1_integer& val) { return mu__long::operator=((int) val); };
  mu_1_integer (const char *name, int os): mu__long(-1000, 1000, 11, name, os) {};
  mu_1_integer (void): mu__long(-1000, 1000, 11) {};
  mu_1_integer (int val): mu__long(-1000, 1000, 11, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_integer mu_1_integer_undefined_var;

class mu_1_TIME_type: public mu__real
{
 public:
  inline double operator=(double val) { return mu__real::operator=(val); };
  inline double operator=(const mu_1_TIME_type& val) { return mu__real::operator=((double) val); };
  mu_1_TIME_type (const char *name, int os): mu__real(12,7,64,name, os) {};
  mu_1_TIME_type (void): mu__real(12,7,64) {};
  mu_1_TIME_type (double val): mu__real(12,7,64,"Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%le",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of real decl ***/
mu_1_TIME_type mu_1_TIME_type_undefined_var;

class mu_1_crew_members: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_crew_members& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_crew_members& val)
  {
    if (val.defined())
      return ( s << mu_1_crew_members::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_crew_members (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_crew_members (void): mu__byte(1, 2, 2) {};
  mu_1_crew_members (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -1],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_crew_members::values[] = {"a","b",NULL };

/*** end of enum declaration ***/
mu_1_crew_members mu_1_crew_members_undefined_var;

class mu_1_activity: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_activity& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_activity& val)
  {
    if (val.defined())
      return ( s << mu_1_activity::values[ int(val) - 3] );
    else return ( s << "Undefined" );
  };

  mu_1_activity (const char *name, int os): mu__byte(3, 4, 2, name, os) {};
  mu_1_activity (void): mu__byte(3, 4, 2) {};
  mu_1_activity (int val): mu__byte(3, 4, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -3]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -3],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_activity::values[] = {"work","exercise",NULL };

/*** end of enum declaration ***/
mu_1_activity mu_1_activity_undefined_var;

class mu_1_location: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_location& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_location& val)
  {
    if (val.defined())
      return ( s << mu_1_location::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_location (const char *name, int os): mu__byte(5, 5, 1, name, os) {};
  mu_1_location (void): mu__byte(5, 5, 1) {};
  mu_1_location (int val): mu__byte(5, 5, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -5]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -5],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_location::values[] = {"loca",NULL };

/*** end of enum declaration ***/
mu_1_location mu_1_location_undefined_var;

class mu_1_days: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_days& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_days& val)
  {
    if (val.defined())
      return ( s << mu_1_days::values[ int(val) - 6] );
    else return ( s << "Undefined" );
  };

  mu_1_days (const char *name, int os): mu__byte(6, 8, 2, name, os) {};
  mu_1_days (void): mu__byte(6, 8, 2) {};
  mu_1_days (int val): mu__byte(6, 8, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -6]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -6],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_days::values[] = {"day0","day1","day2",NULL };

/*** end of enum declaration ***/
mu_1_days mu_1_days_undefined_var;

class mu_1__type_0/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 2 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_0 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_0
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_0
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_0
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_0
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_0
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_0
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_0::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1/*:public mu_1__type_super*/
{
 public:
  mu_1__type_0 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_0_mu_1__type_1 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1__type_0& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_1
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_1
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_1
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_1
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_1
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_1
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_1::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 96 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 96 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 3 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_2 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_2
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_2
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_2
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_2
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_2
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_2
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3/*:public mu_1__type_super*/
{
 public:
  mu_1__type_2 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_2_mu_1__type_3 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1__type_2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_3
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_3
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_3
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_3
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_3
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_3
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_3::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 2 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_4 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_4
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_4
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_4
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_4
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_4
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_4
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_4::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 3 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_5 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_5
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_5
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_5
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_5
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_5
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_5
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_5::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6/*:public mu_1__type_super*/
{
 public:
  mu_1__type_5 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_5_mu_1__type_6 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1__type_5& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_6
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_6
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_6
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_6
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_6
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_6
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_6::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 3 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_7 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_7
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_7
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_7
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_7
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_7
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_7
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_7::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8/*:public mu_1__type_super*/
{
 public:
  mu_1__type_7 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_7_mu_1__type_8 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1__type_7& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_8
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_8
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_8
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_8
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_8
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_8
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_8::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_9 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_9
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_9
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_9
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_9
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_9
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_9
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_9::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10/*:public mu_1__type_super*/
{
 public:
  mu_1__type_9 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_9_mu_1__type_10 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1__type_9& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_10
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_10
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_10
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_10
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_10
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_10
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_10::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11/*:public mu_1__type_super*/
{
 public:
  mu_1_TIME_type array[ 3 ]; 
#define awesome_mu_00_mu_1_TIME_type_mu_1__type_11 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_TIME_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_11
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_11
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_11
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_11
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_11
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_11
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_11::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 64 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 64 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 64 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12/*:public mu_1__type_super*/
{
 public:
  mu_1__type_11 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_11_mu_1__type_12 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1__type_11& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_12
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_12
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_12
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_12
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_12
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_12
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_12::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_12::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_12::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_13 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_13
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_13
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_13
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_13
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_13
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_13
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_13::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_13::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_13::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14/*:public mu_1__type_super*/
{
 public:
  mu_1__type_13 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_13_mu_1__type_14 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1__type_13& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_14
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_14
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_14
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_14
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_14
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_14
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_14::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_14::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_14::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15/*:public mu_1__type_super*/
{
 public:
  mu_1__type_14 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_14_mu_1__type_15 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_1__type_14& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_15
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_15
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_15
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_15
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_15
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_15
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_15::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_15::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_15::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16/*:public mu_1__type_super*/
{
 public:
  mu_1_TIME_type array[ 2 ]; 
#define awesome_mu_00_mu_1_TIME_type_mu_1__type_16 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_1_TIME_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_16& operator= (const mu_1__type_16& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_16
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_16
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_16
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_16
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_16
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_16
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_16::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_16::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_16::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 64 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 64 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17/*:public mu_1__type_super*/
{
 public:
  mu_1__type_16 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_16_mu_1__type_17 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_17 (const char *n, int os) { set_self(n, os); };
  mu_1__type_17 ( void ) {};
  virtual ~mu_1__type_17 ();
  mu_1__type_16& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_17
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_17
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_17
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_17
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_17
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_17
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_17::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_17::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_17::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 128 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 128 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18/*:public mu_1__type_super*/
{
 public:
  mu_1__type_17 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_17_mu_1__type_18 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_18 (const char *n, int os) { set_self(n, os); };
  mu_1__type_18 ( void ) {};
  virtual ~mu_1__type_18 ();
  mu_1__type_17& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_18
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_18
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_18
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_18
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_18
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_18
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_18::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_18::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_18::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 256 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 256 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 256 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_19 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_19 (const char *n, int os) { set_self(n, os); };
  mu_1__type_19 ( void ) {};
  virtual ~mu_1__type_19 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_19& operator= (const mu_1__type_19& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_19
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_19
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_19
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_19
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_19
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_19
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_19::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_19::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_19::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20/*:public mu_1__type_super*/
{
 public:
  mu_1__type_19 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_19_mu_1__type_20 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_20 (const char *n, int os) { set_self(n, os); };
  mu_1__type_20 ( void ) {};
  virtual ~mu_1__type_20 ();
  mu_1__type_19& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_20
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_20
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_20
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_20
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_20
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_20
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_20::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_20::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_20::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1__type_21/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_21 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_21 (const char *n, int os) { set_self(n, os); };
  mu_1__type_21 ( void ) {};
  virtual ~mu_1__type_21 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_21& operator= (const mu_1__type_21& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_21
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_21
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_21
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_21
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_21
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_21
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_21::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_21::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_21::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_21::~mu_1__type_21()
{
}
/*** end array declaration ***/
mu_1__type_21 mu_1__type_21_undefined_var;

class mu_1__type_22/*:public mu_1__type_super*/
{
 public:
  mu_1__type_21 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_21_mu_1__type_22 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_22 (const char *n, int os) { set_self(n, os); };
  mu_1__type_22 ( void ) {};
  virtual ~mu_1__type_22 ();
  mu_1__type_21& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_22& operator= (const mu_1__type_22& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_22
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_22
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_22
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_22
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_22
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_22
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_22::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_22::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_22::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_22::~mu_1__type_22()
{
}
/*** end array declaration ***/
mu_1__type_22 mu_1__type_22_undefined_var;

class mu_1__type_23/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_23 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_23 (const char *n, int os) { set_self(n, os); };
  mu_1__type_23 ( void ) {};
  virtual ~mu_1__type_23 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_23& operator= (const mu_1__type_23& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_23
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_23
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_23
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_23
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_23
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_23
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_23::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_23::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_23::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_23::~mu_1__type_23()
{
}
/*** end array declaration ***/
mu_1__type_23 mu_1__type_23_undefined_var;

class mu_1__type_24/*:public mu_1__type_super*/
{
 public:
  mu_1__type_23 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_23_mu_1__type_24 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_24 (const char *n, int os) { set_self(n, os); };
  mu_1__type_24 ( void ) {};
  virtual ~mu_1__type_24 ();
  mu_1__type_23& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_24& operator= (const mu_1__type_24& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_24& a, mu_1__type_24& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_24& a, mu_1__type_24& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_24
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_24
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_24
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_24
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_24
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_24
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_24::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_24::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_24::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_24::~mu_1__type_24()
{
}
/*** end array declaration ***/
mu_1__type_24 mu_1__type_24_undefined_var;

class mu_1__type_25/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_25 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_25 (const char *n, int os) { set_self(n, os); };
  mu_1__type_25 ( void ) {};
  virtual ~mu_1__type_25 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_25& operator= (const mu_1__type_25& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_25
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_25
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_25
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_25
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_25
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_25
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_25::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_25::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_25::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_25::~mu_1__type_25()
{
}
/*** end array declaration ***/
mu_1__type_25 mu_1__type_25_undefined_var;

class mu_1__type_26/*:public mu_1__type_super*/
{
 public:
  mu_1__type_25 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_25_mu_1__type_26 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_26 (const char *n, int os) { set_self(n, os); };
  mu_1__type_26 ( void ) {};
  virtual ~mu_1__type_26 ();
  mu_1__type_25& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_26& operator= (const mu_1__type_26& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_26
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_26
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_26
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_26
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_26
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_26
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_26::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_26::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_26::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_26::~mu_1__type_26()
{
}
/*** end array declaration ***/
mu_1__type_26 mu_1__type_26_undefined_var;

class mu_1__type_27/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_27 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_27 (const char *n, int os) { set_self(n, os); };
  mu_1__type_27 ( void ) {};
  virtual ~mu_1__type_27 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_27& operator= (const mu_1__type_27& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_27
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_27
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_27
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_27
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_27
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_27
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_27::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_27::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_27::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_27::~mu_1__type_27()
{
}
/*** end array declaration ***/
mu_1__type_27 mu_1__type_27_undefined_var;

class mu_1__type_28/*:public mu_1__type_super*/
{
 public:
  mu_1__type_27 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_27_mu_1__type_28 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_28 (const char *n, int os) { set_self(n, os); };
  mu_1__type_28 ( void ) {};
  virtual ~mu_1__type_28 ();
  mu_1__type_27& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_28& operator= (const mu_1__type_28& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_28
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_28
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_28
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_28
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_28
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_28
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_28::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_28::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_28::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_28::~mu_1__type_28()
{
}
/*** end array declaration ***/
mu_1__type_28 mu_1__type_28_undefined_var;

class mu_1__type_29/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_29 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_29 (const char *n, int os) { set_self(n, os); };
  mu_1__type_29 ( void ) {};
  virtual ~mu_1__type_29 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_29& operator= (const mu_1__type_29& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_29
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_29
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_29
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_29
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_29
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_29
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_29::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_29::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_29::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_29::~mu_1__type_29()
{
}
/*** end array declaration ***/
mu_1__type_29 mu_1__type_29_undefined_var;

class mu_1__type_30/*:public mu_1__type_super*/
{
 public:
  mu_1__type_29 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_29_mu_1__type_30 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_30 (const char *n, int os) { set_self(n, os); };
  mu_1__type_30 ( void ) {};
  virtual ~mu_1__type_30 ();
  mu_1__type_29& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_30& operator= (const mu_1__type_30& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_30
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_30
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_30
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_30
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_30
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_30
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_30::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_30::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_30::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_30::~mu_1__type_30()
{
}
/*** end array declaration ***/
mu_1__type_30 mu_1__type_30_undefined_var;

class mu_1__type_31/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_31 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_31 (const char *n, int os) { set_self(n, os); };
  mu_1__type_31 ( void ) {};
  virtual ~mu_1__type_31 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 5 ) && ( index <= 5 ) )
      return array[ index - 5 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 5 ];
#endif
  };
  mu_1__type_31& operator= (const mu_1__type_31& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_31
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_31
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_31
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_31
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_31
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_31
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_31::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_31::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_31::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"loca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_31::~mu_1__type_31()
{
}
/*** end array declaration ***/
mu_1__type_31 mu_1__type_31_undefined_var;

class mu_1__type_32/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_32 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_32 (const char *n, int os) { set_self(n, os); };
  mu_1__type_32 ( void ) {};
  virtual ~mu_1__type_32 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_32& operator= (const mu_1__type_32& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_32
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_32
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_32
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_32
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_32
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_32
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_32::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_32::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_32::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_32::~mu_1__type_32()
{
}
/*** end array declaration ***/
mu_1__type_32 mu_1__type_32_undefined_var;

class mu_1__type_33/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_33 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_33 (const char *n, int os) { set_self(n, os); };
  mu_1__type_33 ( void ) {};
  virtual ~mu_1__type_33 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_33& operator= (const mu_1__type_33& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_33
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_33
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_33
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_33
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_33
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_33
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_33::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_33::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_33::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_33::~mu_1__type_33()
{
}
/*** end array declaration ***/
mu_1__type_33 mu_1__type_33_undefined_var;

class mu_1__type_34/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_34 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_34 (const char *n, int os) { set_self(n, os); };
  mu_1__type_34 ( void ) {};
  virtual ~mu_1__type_34 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_34& operator= (const mu_1__type_34& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_34
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_34
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_34
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_34
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_34
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_34
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_34::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_34::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_34::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_34::~mu_1__type_34()
{
}
/*** end array declaration ***/
mu_1__type_34 mu_1__type_34_undefined_var;

class mu_1__type_35/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_35 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_35 (const char *n, int os) { set_self(n, os); };
  mu_1__type_35 ( void ) {};
  virtual ~mu_1__type_35 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_35& operator= (const mu_1__type_35& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_35
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_35
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_35
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_35
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_35
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_35
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_35::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_35::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_35::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_35::~mu_1__type_35()
{
}
/*** end array declaration ***/
mu_1__type_35 mu_1__type_35_undefined_var;

class mu_1__type_36/*:public mu_1__type_super*/
{
 public:
  mu_1__type_35 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_35_mu_1__type_36 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_36 (const char *n, int os) { set_self(n, os); };
  mu_1__type_36 ( void ) {};
  virtual ~mu_1__type_36 ();
  mu_1__type_35& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_36& operator= (const mu_1__type_36& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_36
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_36
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_36
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_36
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_36
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_36
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_36::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_36::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_36::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_36::~mu_1__type_36()
{
}
/*** end array declaration ***/
mu_1__type_36 mu_1__type_36_undefined_var;

class mu_1__type_37/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_37 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_37 (const char *n, int os) { set_self(n, os); };
  mu_1__type_37 ( void ) {};
  virtual ~mu_1__type_37 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_37& operator= (const mu_1__type_37& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_37
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_37
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_37
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_37
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_37
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_37
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_37::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_37::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_37::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_37::~mu_1__type_37()
{
}
/*** end array declaration ***/
mu_1__type_37 mu_1__type_37_undefined_var;

class mu_1__type_38/*:public mu_1__type_super*/
{
 public:
  mu_1__type_37 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_37_mu_1__type_38 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_38 (const char *n, int os) { set_self(n, os); };
  mu_1__type_38 ( void ) {};
  virtual ~mu_1__type_38 ();
  mu_1__type_37& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_38& operator= (const mu_1__type_38& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_38& a, mu_1__type_38& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_38& a, mu_1__type_38& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_38
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_38
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_38
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_38
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_38
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_38
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_38::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_38::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_38::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_38::~mu_1__type_38()
{
}
/*** end array declaration ***/
mu_1__type_38 mu_1__type_38_undefined_var;

class mu_1__type_39/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_39 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_39 (const char *n, int os) { set_self(n, os); };
  mu_1__type_39 ( void ) {};
  virtual ~mu_1__type_39 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_39& operator= (const mu_1__type_39& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_39& a, mu_1__type_39& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_39& a, mu_1__type_39& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_39
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_39
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_39
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_39
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_39
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_39
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_39::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_39::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_39::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_39::~mu_1__type_39()
{
}
/*** end array declaration ***/
mu_1__type_39 mu_1__type_39_undefined_var;

class mu_1__type_40/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_40 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_40 (const char *n, int os) { set_self(n, os); };
  mu_1__type_40 ( void ) {};
  virtual ~mu_1__type_40 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_40& operator= (const mu_1__type_40& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_40& a, mu_1__type_40& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_40& a, mu_1__type_40& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_40
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_40
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_40
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_40
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_40
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_40
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_40::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_40::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_40::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_40::~mu_1__type_40()
{
}
/*** end array declaration ***/
mu_1__type_40 mu_1__type_40_undefined_var;

class mu_1__type_41/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_41 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_41 (const char *n, int os) { set_self(n, os); };
  mu_1__type_41 ( void ) {};
  virtual ~mu_1__type_41 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_41& operator= (const mu_1__type_41& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_41& a, mu_1__type_41& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_41& a, mu_1__type_41& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_41
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_41
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_41
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_41
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_41
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_41
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_41::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_41::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_41::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_41::~mu_1__type_41()
{
}
/*** end array declaration ***/
mu_1__type_41 mu_1__type_41_undefined_var;

class mu_1__type_42/*:public mu_1__type_super*/
{
 public:
  mu_1__type_41 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_41_mu_1__type_42 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_42 (const char *n, int os) { set_self(n, os); };
  mu_1__type_42 ( void ) {};
  virtual ~mu_1__type_42 ();
  mu_1__type_41& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_42& operator= (const mu_1__type_42& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_42& a, mu_1__type_42& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_42& a, mu_1__type_42& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_42
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_42
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_42
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_42
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_42
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_42
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_42::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_42::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_42::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_42::~mu_1__type_42()
{
}
/*** end array declaration ***/
mu_1__type_42 mu_1__type_42_undefined_var;

class mu_1__type_43/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_43 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_43 (const char *n, int os) { set_self(n, os); };
  mu_1__type_43 ( void ) {};
  virtual ~mu_1__type_43 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_43& operator= (const mu_1__type_43& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_43& a, mu_1__type_43& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_43& a, mu_1__type_43& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_43
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_43
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_43
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_43
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_43
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_43
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_43::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_43::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_43::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_43::~mu_1__type_43()
{
}
/*** end array declaration ***/
mu_1__type_43 mu_1__type_43_undefined_var;

class mu_1__type_44/*:public mu_1__type_super*/
{
 public:
  mu_1__type_43 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_43_mu_1__type_44 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_44 (const char *n, int os) { set_self(n, os); };
  mu_1__type_44 ( void ) {};
  virtual ~mu_1__type_44 ();
  mu_1__type_43& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_44& operator= (const mu_1__type_44& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_44& a, mu_1__type_44& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_44& a, mu_1__type_44& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_44
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_44
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_44
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_44
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_44
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_44
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_44::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_44::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_44::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_44::~mu_1__type_44()
{
}
/*** end array declaration ***/
mu_1__type_44 mu_1__type_44_undefined_var;

class mu_1__type_45/*:public mu_1__type_super*/
{
 public:
  mu_1__type_44 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_44_mu_1__type_45 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_45 (const char *n, int os) { set_self(n, os); };
  mu_1__type_45 ( void ) {};
  virtual ~mu_1__type_45 ();
  mu_1__type_44& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_45& operator= (const mu_1__type_45& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_45& a, mu_1__type_45& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_45& a, mu_1__type_45& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_45
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_45
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_45
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_45
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_45
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_45
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_45::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_45::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_45::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_45::~mu_1__type_45()
{
}
/*** end array declaration ***/
mu_1__type_45 mu_1__type_45_undefined_var;

class mu_1__type_46/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_46 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_46 (const char *n, int os) { set_self(n, os); };
  mu_1__type_46 ( void ) {};
  virtual ~mu_1__type_46 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_46& operator= (const mu_1__type_46& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_46& a, mu_1__type_46& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_46& a, mu_1__type_46& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_46
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_46
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_46
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_46
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_46
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_46
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_46::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_46::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_46::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_46::~mu_1__type_46()
{
}
/*** end array declaration ***/
mu_1__type_46 mu_1__type_46_undefined_var;

class mu_1__type_47/*:public mu_1__type_super*/
{
 public:
  mu_1__type_46 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_46_mu_1__type_47 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_47 (const char *n, int os) { set_self(n, os); };
  mu_1__type_47 ( void ) {};
  virtual ~mu_1__type_47 ();
  mu_1__type_46& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_47& operator= (const mu_1__type_47& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_47& a, mu_1__type_47& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_47& a, mu_1__type_47& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_47
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_47
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_47
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_47
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_47
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_47
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_47::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_47::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_47::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_47::~mu_1__type_47()
{
}
/*** end array declaration ***/
mu_1__type_47 mu_1__type_47_undefined_var;

class mu_1__type_48/*:public mu_1__type_super*/
{
 public:
  mu_1__type_47 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_47_mu_1__type_48 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_48 (const char *n, int os) { set_self(n, os); };
  mu_1__type_48 ( void ) {};
  virtual ~mu_1__type_48 ();
  mu_1__type_47& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_48& operator= (const mu_1__type_48& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_48& a, mu_1__type_48& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_48& a, mu_1__type_48& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_48
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_48
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_48
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_48
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_48
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_48
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_48::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_48::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_48::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_48::~mu_1__type_48()
{
}
/*** end array declaration ***/
mu_1__type_48 mu_1__type_48_undefined_var;

class mu_1__type_49/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_49 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_49 (const char *n, int os) { set_self(n, os); };
  mu_1__type_49 ( void ) {};
  virtual ~mu_1__type_49 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_49& operator= (const mu_1__type_49& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_49& a, mu_1__type_49& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_49& a, mu_1__type_49& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_49
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_49
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_49
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_49
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_49
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_49
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_49::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_49::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_49::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_49::~mu_1__type_49()
{
}
/*** end array declaration ***/
mu_1__type_49 mu_1__type_49_undefined_var;

class mu_1__type_50/*:public mu_1__type_super*/
{
 public:
  mu_1__type_49 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_49_mu_1__type_50 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_50 (const char *n, int os) { set_self(n, os); };
  mu_1__type_50 ( void ) {};
  virtual ~mu_1__type_50 ();
  mu_1__type_49& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_50& operator= (const mu_1__type_50& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_50& a, mu_1__type_50& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_50& a, mu_1__type_50& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_50
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_50
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_50
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_50
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_50
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_50
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_50::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_50::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_50::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_50::~mu_1__type_50()
{
}
/*** end array declaration ***/
mu_1__type_50 mu_1__type_50_undefined_var;

class mu_1__type_51/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_51 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_51 (const char *n, int os) { set_self(n, os); };
  mu_1__type_51 ( void ) {};
  virtual ~mu_1__type_51 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_51& operator= (const mu_1__type_51& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_51& a, mu_1__type_51& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_51& a, mu_1__type_51& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_51
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_51
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_51
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_51
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_51
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_51
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_51::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_51::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_51::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_51::~mu_1__type_51()
{
}
/*** end array declaration ***/
mu_1__type_51 mu_1__type_51_undefined_var;

class mu_1__type_52/*:public mu_1__type_super*/
{
 public:
  mu_1__type_51 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_51_mu_1__type_52 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_52 (const char *n, int os) { set_self(n, os); };
  mu_1__type_52 ( void ) {};
  virtual ~mu_1__type_52 ();
  mu_1__type_51& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_52& operator= (const mu_1__type_52& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_52& a, mu_1__type_52& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_52& a, mu_1__type_52& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_52
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_52
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_52
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_52
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_52
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_52
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_52::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_52::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_52::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_52::~mu_1__type_52()
{
}
/*** end array declaration ***/
mu_1__type_52 mu_1__type_52_undefined_var;

class mu_1__type_53/*:public mu_1__type_super*/
{
 public:
  mu_1__type_52 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_52_mu_1__type_53 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_53 (const char *n, int os) { set_self(n, os); };
  mu_1__type_53 ( void ) {};
  virtual ~mu_1__type_53 ();
  mu_1__type_52& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_53& operator= (const mu_1__type_53& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_53& a, mu_1__type_53& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_53& a, mu_1__type_53& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_53
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_53
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_53
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_53
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_53
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_53
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_53::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_53::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_53::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_53::~mu_1__type_53()
{
}
/*** end array declaration ***/
mu_1__type_53 mu_1__type_53_undefined_var;

class mu_1__type_54/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_54 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_54 (const char *n, int os) { set_self(n, os); };
  mu_1__type_54 ( void ) {};
  virtual ~mu_1__type_54 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_54& operator= (const mu_1__type_54& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_54& a, mu_1__type_54& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_54& a, mu_1__type_54& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_54
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_54
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_54
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_54
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_54
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_54
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_54::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_54::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_54::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_54::~mu_1__type_54()
{
}
/*** end array declaration ***/
mu_1__type_54 mu_1__type_54_undefined_var;

class mu_1__type_55/*:public mu_1__type_super*/
{
 public:
  mu_1__type_54 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_54_mu_1__type_55 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_55 (const char *n, int os) { set_self(n, os); };
  mu_1__type_55 ( void ) {};
  virtual ~mu_1__type_55 ();
  mu_1__type_54& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_55& operator= (const mu_1__type_55& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_55& a, mu_1__type_55& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_55& a, mu_1__type_55& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_55
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_55
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_55
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_55
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_55
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_55
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_55::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_55::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_55::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_55::~mu_1__type_55()
{
}
/*** end array declaration ***/
mu_1__type_55 mu_1__type_55_undefined_var;

class mu_1__type_56/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_56 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_56 (const char *n, int os) { set_self(n, os); };
  mu_1__type_56 ( void ) {};
  virtual ~mu_1__type_56 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_56& operator= (const mu_1__type_56& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_56& a, mu_1__type_56& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_56& a, mu_1__type_56& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_56
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_56
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_56
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_56
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_56
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_56
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_56::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_56::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_56::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_56::~mu_1__type_56()
{
}
/*** end array declaration ***/
mu_1__type_56 mu_1__type_56_undefined_var;

class mu_1__type_57/*:public mu_1__type_super*/
{
 public:
  mu_1__type_56 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_56_mu_1__type_57 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_57 (const char *n, int os) { set_self(n, os); };
  mu_1__type_57 ( void ) {};
  virtual ~mu_1__type_57 ();
  mu_1__type_56& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_57& operator= (const mu_1__type_57& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_57& a, mu_1__type_57& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_57& a, mu_1__type_57& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_57
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_57
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_57
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_57
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_57
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_57
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_57::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_57::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_57::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"work", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_57::~mu_1__type_57()
{
}
/*** end array declaration ***/
mu_1__type_57 mu_1__type_57_undefined_var;

class mu_1__type_58/*:public mu_1__type_super*/
{
 public:
  mu_1__type_57 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_57_mu_1__type_58 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_58 (const char *n, int os) { set_self(n, os); };
  mu_1__type_58 ( void ) {};
  virtual ~mu_1__type_58 ();
  mu_1__type_57& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 6 ) && ( index <= 8 ) )
      return array[ index - 6 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 6 ];
#endif
  };
  mu_1__type_58& operator= (const mu_1__type_58& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_58& a, mu_1__type_58& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_58& a, mu_1__type_58& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_58
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_58
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_58
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_58
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_58
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_58
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_58::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_58::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_58::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"day0", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_58::~mu_1__type_58()
{
}
/*** end array declaration ***/
mu_1__type_58 mu_1__type_58_undefined_var;

const int mu_a = 1;
const int mu_b = 2;
const int mu_work = 3;
const int mu_exercise = 4;
const int mu_loca = 5;
const int mu_day0 = 6;
const int mu_day1 = 7;
const int mu_day2 = 8;
const double mu_T = +1.000000e+00;
/*** Variable declaration ***/
mu_0_boolean mu_all_event_true("all_event_true",0);

/*** Variable declaration ***/
mu_1_integer mu_h_n("h_n",2);

/*** Variable declaration ***/
mu_1_integer mu_g_n("g_n",13);

/*** Variable declaration ***/
mu_1_integer mu_f_n("f_n",24);

/*** Variable declaration ***/
mu_1_TIME_type mu_TIME("TIME",35);

/*** Variable declaration ***/
mu_1__type_1 mu_rem_time_for_activity("rem_time_for_activity",99);

/*** Variable declaration ***/
mu_1__type_3 mu_rem_time_today("rem_time_today",291);

/*** Variable declaration ***/
mu_1__type_4 mu_time_spent_today("time_spent_today",579);

/*** Variable declaration ***/
mu_1__type_6 mu_total_time_for_activity("total_time_for_activity",675);

/*** Variable declaration ***/
mu_1__type_8 mu_total_time_for_activity_per_person("total_time_for_activity_per_person",963);

/*** Variable declaration ***/
mu_1__type_10 mu_active_day_clock_started("active_day_clock_started",1251);

/*** Variable declaration ***/
mu_1__type_12 mu_active_day_clock("active_day_clock",1269);

/*** Variable declaration ***/
mu_1__type_15 mu_active_activity_clock_started("active_activity_clock_started",1845);

/*** Variable declaration ***/
mu_1__type_18 mu_active_activity_clock("active_activity_clock",1869);

/*** Variable declaration ***/
mu_1__type_20 mu_can_perform_activity_all("can_perform_activity_all",2637);

/*** Variable declaration ***/
mu_1__type_22 mu_in_order("in_order",2649);

/*** Variable declaration ***/
mu_1__type_24 mu_can_start_activity("can_start_activity",2667);

/*** Variable declaration ***/
mu_1__type_26 mu_can_perform_activity("can_perform_activity",2675);

/*** Variable declaration ***/
mu_1__type_28 mu_performing_activity("performing_activity",2683);

/*** Variable declaration ***/
mu_1__type_30 mu_paused_activity("paused_activity",2691);

/*** Variable declaration ***/
mu_1__type_31 mu_blocked_location("blocked_location",2699);

/*** Variable declaration ***/
mu_1__type_32 mu_busy_crewmember("busy_crewmember",2701);

/*** Variable declaration ***/
mu_1__type_33 mu_start_day("start_day",2705);

/*** Variable declaration ***/
mu_1__type_34 mu_complete_day("complete_day",2711);

/*** Variable declaration ***/
mu_1__type_36 mu_can_pause("can_pause",2717);

/*** Variable declaration ***/
mu_1__type_38 mu_activity_in_progress("activity_in_progress",2725);

/*** Variable declaration ***/
mu_1__type_39 mu_day_in_progress("day_in_progress",2733);

/*** Variable declaration ***/
mu_1__type_40 mu_schedule_in_progress("schedule_in_progress",2739);

/*** Variable declaration ***/
mu_1__type_42 mu_create_schedule_for_member("create_schedule_for_member",2743);

/*** Variable declaration ***/
mu_1__type_45 mu_already_completed("already_completed",2755);

/*** Variable declaration ***/
mu_1__type_48 mu_planner_in_progress("planner_in_progress",2779);


#include "nwmodel.h"

void mu_set_can_perform_activity_all(const mu_1_crew_members& mu_crmem, const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_can_perform_activity_all[mu_crmem][mu_day].undefine();
else
  mu_can_perform_activity_all[mu_crmem][mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_can_perform_activity_all(const mu_1_crew_members& mu_crmem,const mu_1_days& mu_day)
{
return mu_can_perform_activity_all[mu_crmem][mu_day];
	Error.Error("The end of function get_can_perform_activity_all reached without returning values.");
};
/*** end function declaration ***/

void mu_set_in_order(const mu_1_days& mu_day1, const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_in_order[mu_day1][mu_day].undefine();
else
  mu_in_order[mu_day1][mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_in_order(const mu_1_days& mu_day1,const mu_1_days& mu_day)
{
return mu_in_order[mu_day1][mu_day];
	Error.Error("The end of function get_in_order reached without returning values.");
};
/*** end function declaration ***/

void mu_set_can_start_activity(const mu_1_crew_members& mu_crmem, const mu_1_activity& mu_wrt, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_can_start_activity[mu_crmem][mu_wrt].undefine();
else
  mu_can_start_activity[mu_crmem][mu_wrt] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_can_start_activity(const mu_1_crew_members& mu_crmem,const mu_1_activity& mu_wrt)
{
return mu_can_start_activity[mu_crmem][mu_wrt];
	Error.Error("The end of function get_can_start_activity reached without returning values.");
};
/*** end function declaration ***/

void mu_set_can_perform_activity(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_can_perform_activity[mu_wrt][mu_crmem].undefine();
else
  mu_can_perform_activity[mu_wrt][mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_can_perform_activity(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem)
{
return mu_can_perform_activity[mu_wrt][mu_crmem];
	Error.Error("The end of function get_can_perform_activity reached without returning values.");
};
/*** end function declaration ***/

void mu_set_performing_activity(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_performing_activity[mu_wrt][mu_crmem].undefine();
else
  mu_performing_activity[mu_wrt][mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_performing_activity(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem)
{
return mu_performing_activity[mu_wrt][mu_crmem];
	Error.Error("The end of function get_performing_activity reached without returning values.");
};
/*** end function declaration ***/

void mu_set_paused_activity(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_paused_activity[mu_wrt][mu_crmem].undefine();
else
  mu_paused_activity[mu_wrt][mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_paused_activity(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem)
{
return mu_paused_activity[mu_wrt][mu_crmem];
	Error.Error("The end of function get_paused_activity reached without returning values.");
};
/*** end function declaration ***/

void mu_set_blocked_location(const mu_1_location& mu_loc, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_blocked_location[mu_loc].undefine();
else
  mu_blocked_location[mu_loc] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_blocked_location(const mu_1_location& mu_loc)
{
return mu_blocked_location[mu_loc];
	Error.Error("The end of function get_blocked_location reached without returning values.");
};
/*** end function declaration ***/

void mu_set_busy_crewmember(const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_busy_crewmember[mu_crmem].undefine();
else
  mu_busy_crewmember[mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_busy_crewmember(const mu_1_crew_members& mu_crmem)
{
return mu_busy_crewmember[mu_crmem];
	Error.Error("The end of function get_busy_crewmember reached without returning values.");
};
/*** end function declaration ***/

void mu_set_start_day(const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_start_day[mu_day].undefine();
else
  mu_start_day[mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_start_day(const mu_1_days& mu_day)
{
return mu_start_day[mu_day];
	Error.Error("The end of function get_start_day reached without returning values.");
};
/*** end function declaration ***/

void mu_set_complete_day(const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_complete_day[mu_day].undefine();
else
  mu_complete_day[mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_complete_day(const mu_1_days& mu_day)
{
return mu_complete_day[mu_day];
	Error.Error("The end of function get_complete_day reached without returning values.");
};
/*** end function declaration ***/

void mu_set_can_pause(const mu_1_activity& mu_act1, const mu_1_activity& mu_act2, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_can_pause[mu_act1][mu_act2].undefine();
else
  mu_can_pause[mu_act1][mu_act2] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_can_pause(const mu_1_activity& mu_act1,const mu_1_activity& mu_act2)
{
return mu_can_pause[mu_act1][mu_act2];
	Error.Error("The end of function get_can_pause reached without returning values.");
};
/*** end function declaration ***/

void mu_set_activity_in_progress(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_activity_in_progress[mu_wrt][mu_crmem].undefine();
else
  mu_activity_in_progress[mu_wrt][mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_activity_in_progress(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem)
{
return mu_activity_in_progress[mu_wrt][mu_crmem];
	Error.Error("The end of function get_activity_in_progress reached without returning values.");
};
/*** end function declaration ***/

void mu_set_day_in_progress(const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_day_in_progress[mu_day].undefine();
else
  mu_day_in_progress[mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_day_in_progress(const mu_1_days& mu_day)
{
return mu_day_in_progress[mu_day];
	Error.Error("The end of function get_day_in_progress reached without returning values.");
};
/*** end function declaration ***/

void mu_set_schedule_in_progress(const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_schedule_in_progress[mu_crmem].undefine();
else
  mu_schedule_in_progress[mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_schedule_in_progress(const mu_1_crew_members& mu_crmem)
{
return mu_schedule_in_progress[mu_crmem];
	Error.Error("The end of function get_schedule_in_progress reached without returning values.");
};
/*** end function declaration ***/

void mu_set_create_schedule_for_member(const mu_1_crew_members& mu_crmem, const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_create_schedule_for_member[mu_crmem][mu_day].undefine();
else
  mu_create_schedule_for_member[mu_crmem][mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_create_schedule_for_member(const mu_1_crew_members& mu_crmem,const mu_1_days& mu_day)
{
return mu_create_schedule_for_member[mu_crmem][mu_day];
	Error.Error("The end of function get_create_schedule_for_member reached without returning values.");
};
/*** end function declaration ***/

void mu_set_already_completed(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_already_completed[mu_wrt][mu_crmem][mu_day].undefine();
else
  mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_already_completed(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem,const mu_1_days& mu_day)
{
return mu_already_completed[mu_wrt][mu_crmem][mu_day];
	Error.Error("The end of function get_already_completed reached without returning values.");
};
/*** end function declaration ***/

void mu_set_planner_in_progress(const mu_1_crew_members& mu_crmem, const mu_1_activity& mu_wrt, const mu_1_days& mu_day, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_planner_in_progress[mu_crmem][mu_wrt][mu_day].undefine();
else
  mu_planner_in_progress[mu_crmem][mu_wrt][mu_day] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_planner_in_progress(const mu_1_crew_members& mu_crmem,const mu_1_activity& mu_wrt,const mu_1_days& mu_day)
{
return mu_planner_in_progress[mu_crmem][mu_wrt][mu_day];
	Error.Error("The end of function get_planner_in_progress reached without returning values.");
};
/*** end function declaration ***/

void mu_process_active_day(const mu_1_days& mu_day, const mu_1_days& mu_day1)
{
if ( mu_active_day_clock_started[mu_day][mu_day1] )
{
mu_active_day_clock[mu_day][mu_day1] = (mu_active_day_clock[mu_day][mu_day1]) + (mu_T);
}
};
/*** end procedure declaration ***/

void mu_process_active_activity(const mu_1_days& mu_day, const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem)
{
if ( mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] )
{
mu_active_activity_clock[mu_day][mu_wrt][mu_crmem] = (mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) + (mu_T);
}
};
/*** end procedure declaration ***/

mu_0_boolean mu_event_active_day_failure(const mu_1_days& mu_day,const mu_1_days& mu_day1)
{
bool mu__boolexpr59;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr59 = FALSE ;
  else {
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
  if (!(mu_true)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_day_in_progress[mu_day]) ; 
}
  mu__boolexpr59 = (!(mu__boolexpr60)) ; 
}
if ( mu__boolexpr59 )
{
mu_active_day_clock[mu_day][mu_day1] = (mu_active_day_clock[mu_day][mu_day1]) + (mu_T);
mu_all_event_true = mu_false;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function event_active_day_failure reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_event_active_activity_failure(const mu_1_days& mu_day,const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem)
{
bool mu__boolexpr64;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr64 = FALSE ;
  else {
bool mu__boolexpr65;
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!(mu_true)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  mu__boolexpr64 = (!(mu__boolexpr65)) ; 
}
if ( mu__boolexpr64 )
{
mu_active_activity_clock[mu_day][mu_wrt][mu_crmem] = (mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) + (mu_T);
mu_all_event_true = mu_false;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function event_active_activity_failure reached without returning values.");
};
/*** end function declaration ***/

void mu_event_check()
{
/*** Variable declaration ***/
mu_0_boolean mu_event_triggered("event_triggered",0);

/*** Variable declaration ***/
mu_1__type_50 mu_event_active_day_failure_triggered("event_active_day_failure_triggered",2);

/*** Variable declaration ***/
mu_1__type_53 mu_event_active_activity_failure_triggered("event_active_activity_failure_triggered",20);

mu_event_triggered = mu_true;
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
mu_event_active_day_failure_triggered[mu_day][mu_day1] = mu_false;
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_event_active_activity_failure_triggered[mu_day][mu_wrt][mu_crmem] = mu_false;
};
};
};
};
};
};
{
  bool mu__while_expr_71;  mu__while_expr_71 = mu_event_triggered;
int mu__counter_70 = 0;
while (mu__while_expr_71) {
if ( ++mu__counter_70 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
if ( !(mu_event_active_day_failure_triggered[mu_day][mu_day1]) )
{
mu_event_active_day_failure_triggered[mu_day][mu_day1] = mu_event_active_day_failure( mu_day, mu_day1 );
bool mu__boolexpr72;
  if (mu_event_triggered) mu__boolexpr72 = TRUE ;
  else {
  mu__boolexpr72 = (mu_event_active_day_failure_triggered[mu_day][mu_day1]) ; 
}
mu_event_triggered = mu__boolexpr72;
}
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
if ( !(mu_event_active_activity_failure_triggered[mu_day][mu_wrt][mu_crmem]) )
{
mu_event_active_activity_failure_triggered[mu_day][mu_wrt][mu_crmem] = mu_event_active_activity_failure( mu_day, mu_wrt, mu_crmem );
bool mu__boolexpr73;
  if (mu_event_triggered) mu__boolexpr73 = TRUE ;
  else {
  mu__boolexpr73 = (mu_event_active_activity_failure_triggered[mu_day][mu_wrt][mu_crmem]) ; 
}
mu_event_triggered = mu__boolexpr73;
}
};
};
};
};
};
};
};
mu__while_expr_71 = mu_event_triggered;
}
};
};
/*** end procedure declaration ***/

mu_0_boolean mu_DAs_violate_duration()
{
/*** Variable declaration ***/
mu_0_boolean mu_DA_duration_violated("DA_duration_violated",0);

mu_DA_duration_violated = mu_false;
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
if ( (mu_active_day_clock[mu_day][mu_day1]) > (2.400000e+01) )
{
return mu_true;
}
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
if ( (mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (mu_total_time_for_activity_per_person[mu_wrt][mu_day]) )
{
return mu_true;
}
};
};
};
};
};
};
return mu_DA_duration_violated;
	Error.Error("The end of function DAs_violate_duration reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_DAs_ongoing_in_goal_state()
{
/*** Variable declaration ***/
mu_0_boolean mu_DA_still_ongoing("DA_still_ongoing",0);

mu_DA_still_ongoing = mu_false;
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
if ( (mu_active_day_clock_started[mu_day][mu_day1]) == (mu_true) )
{
return mu_true;
}
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
if ( (mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]) == (mu_true) )
{
return mu_true;
}
};
};
};
};
};
};
return mu_DA_still_ongoing;
	Error.Error("The end of function DAs_ongoing_in_goal_state reached without returning values.");
};
/*** end function declaration ***/

void mu_apply_continuous_change()
{
/*** Variable declaration ***/
mu_0_boolean mu_process_updated("process_updated",0);

/*** Variable declaration ***/
mu_0_boolean mu_end_while("end_while",2);

/*** Variable declaration ***/
mu_1__type_55 mu_process_active_day_enabled("process_active_day_enabled",4);

/*** Variable declaration ***/
mu_1__type_58 mu_process_active_activity_enabled("process_active_activity_enabled",22);

mu_process_updated = mu_false;
mu_end_while = mu_false;
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
mu_process_active_day_enabled[mu_day][mu_day1] = mu_false;
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_process_active_activity_enabled[mu_day][mu_wrt][mu_crmem] = mu_false;
};
};
};
};
};
};
{
  bool mu__while_expr_75;  mu__while_expr_75 = !(mu_end_while);
int mu__counter_74 = 0;
while (mu__while_expr_75) {
if ( ++mu__counter_74 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
bool mu__boolexpr76;
bool mu__boolexpr77;
  if (!(mu_true)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_active_day_clock_started[mu_day][mu_day1]) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (!(mu_process_active_day_enabled[mu_day][mu_day1])) ; 
}
if ( mu__boolexpr76 )
{
mu_process_updated = mu_true;
mu_process_active_day ( mu_day, mu_day1 );
mu_process_active_day_enabled[mu_day][mu_day1] = mu_true;
}
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
bool mu__boolexpr78;
bool mu__boolexpr79;
  if (!(mu_true)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (!(mu_process_active_activity_enabled[mu_day][mu_wrt][mu_crmem])) ; 
}
if ( mu__boolexpr78 )
{
mu_process_updated = mu_true;
mu_process_active_activity ( mu_day, mu_wrt, mu_crmem );
mu_process_active_activity_enabled[mu_day][mu_wrt][mu_crmem] = mu_true;
}
};
};
};
};
};
};
if ( !(mu_process_updated) )
{
mu_end_while = mu_true;
}
else
{
mu_process_updated = mu_false;
}
};
mu__while_expr_75 = !(mu_end_while);
}
};
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_all_event_true.clear();
  mu_h_n.clear();
  mu_g_n.clear();
  mu_f_n.clear();
  mu_TIME.clear();
  mu_rem_time_for_activity.clear();
  mu_rem_time_today.clear();
  mu_time_spent_today.clear();
  mu_total_time_for_activity.clear();
  mu_total_time_for_activity_per_person.clear();
  mu_active_day_clock_started.clear();
  mu_active_day_clock.clear();
  mu_active_activity_clock_started.clear();
  mu_active_activity_clock.clear();
  mu_can_perform_activity_all.clear();
  mu_in_order.clear();
  mu_can_start_activity.clear();
  mu_can_perform_activity.clear();
  mu_performing_activity.clear();
  mu_paused_activity.clear();
  mu_blocked_location.clear();
  mu_busy_crewmember.clear();
  mu_start_day.clear();
  mu_complete_day.clear();
  mu_can_pause.clear();
  mu_activity_in_progress.clear();
  mu_day_in_progress.clear();
  mu_schedule_in_progress.clear();
  mu_create_schedule_for_member.clear();
  mu_already_completed.clear();
  mu_planner_in_progress.clear();
}
void world_class::undefine()
{
  mu_all_event_true.undefine();
  mu_h_n.undefine();
  mu_g_n.undefine();
  mu_f_n.undefine();
  mu_TIME.undefine();
  mu_rem_time_for_activity.undefine();
  mu_rem_time_today.undefine();
  mu_time_spent_today.undefine();
  mu_total_time_for_activity.undefine();
  mu_total_time_for_activity_per_person.undefine();
  mu_active_day_clock_started.undefine();
  mu_active_day_clock.undefine();
  mu_active_activity_clock_started.undefine();
  mu_active_activity_clock.undefine();
  mu_can_perform_activity_all.undefine();
  mu_in_order.undefine();
  mu_can_start_activity.undefine();
  mu_can_perform_activity.undefine();
  mu_performing_activity.undefine();
  mu_paused_activity.undefine();
  mu_blocked_location.undefine();
  mu_busy_crewmember.undefine();
  mu_start_day.undefine();
  mu_complete_day.undefine();
  mu_can_pause.undefine();
  mu_activity_in_progress.undefine();
  mu_day_in_progress.undefine();
  mu_schedule_in_progress.undefine();
  mu_create_schedule_for_member.undefine();
  mu_already_completed.undefine();
  mu_planner_in_progress.undefine();
}
void world_class::reset()
{
  mu_all_event_true.reset();
  mu_h_n.reset();
  mu_g_n.reset();
  mu_f_n.reset();
  mu_TIME.reset();
  mu_rem_time_for_activity.reset();
  mu_rem_time_today.reset();
  mu_time_spent_today.reset();
  mu_total_time_for_activity.reset();
  mu_total_time_for_activity_per_person.reset();
  mu_active_day_clock_started.reset();
  mu_active_day_clock.reset();
  mu_active_activity_clock_started.reset();
  mu_active_activity_clock.reset();
  mu_can_perform_activity_all.reset();
  mu_in_order.reset();
  mu_can_start_activity.reset();
  mu_can_perform_activity.reset();
  mu_performing_activity.reset();
  mu_paused_activity.reset();
  mu_blocked_location.reset();
  mu_busy_crewmember.reset();
  mu_start_day.reset();
  mu_complete_day.reset();
  mu_can_pause.reset();
  mu_activity_in_progress.reset();
  mu_day_in_progress.reset();
  mu_schedule_in_progress.reset();
  mu_create_schedule_for_member.reset();
  mu_already_completed.reset();
  mu_planner_in_progress.reset();
}
std::vector<mu_0_boolean*> world_class::get_mu_bools()
{
	  std::vector<mu_0_boolean*> awesome;

      awesome.push_back(&(mu_all_event_true));
    return awesome; 
}
std::vector<mu_0_boolean*> world_class::get_mu_bool_arrays()
{
	  std::vector<mu_0_boolean*> var_arrays;
   std::vector<mu_0_boolean*> interm;

      interm = mu_rem_time_for_activity.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_rem_time_today.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_time_spent_today.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_total_time_for_activity.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_total_time_for_activity_per_person.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_day_clock_started.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_day_clock.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_activity_clock_started.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_activity_clock.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_perform_activity_all.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_in_order.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_start_activity.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_perform_activity.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_performing_activity.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_paused_activity.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_blocked_location.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_busy_crewmember.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_start_day.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_complete_day.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_pause.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_activity_in_progress.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_day_in_progress.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_schedule_in_progress.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_create_schedule_for_member.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_already_completed.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_planner_in_progress.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
    return var_arrays; 
}
std::vector<mu__real*> world_class::get_mu_nums()
{
	  std::vector<mu__real*> awesome;

    return awesome; 
}
std::vector<mu__real*> world_class::get_mu_num_arrays()
{
	  std::vector<mu__real*> var_arrays;
   std::vector<mu__real*> interm;

      interm = mu_rem_time_for_activity.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_rem_time_today.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_time_spent_today.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_total_time_for_activity.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_total_time_for_activity_per_person.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_day_clock_started.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_day_clock.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_activity_clock_started.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_active_activity_clock.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_perform_activity_all.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_in_order.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_start_activity.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_perform_activity.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_performing_activity.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_paused_activity.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_blocked_location.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_busy_crewmember.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_start_day.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_complete_day.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_can_pause.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_activity_in_progress.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_day_in_progress.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_schedule_in_progress.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_create_schedule_for_member.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_already_completed.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_planner_in_progress.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
    return var_arrays; 
}
//WP WP WP WP WP
double world_class::get_f_val()
{
  double f_val = mu_f_n.value();
  return f_val;
}

//WP WP WP WP WP
void world_class::fire_processes()
{
		for(int mu_day = 6; mu_day <= 8; mu_day++)
		for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++)
		for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++)
			mu_process_active_activity(mu_day, mu_wrt, mu_crmem);

		for(int mu_day = 6; mu_day <= 8; mu_day++)
		for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++)
			mu_process_active_day(mu_day, mu_day1);

}

//WP WP WP WP WP
void world_class::fire_processes_plus()
{
for(int mu_day = 6; mu_day <= 8; mu_day++)
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++)
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++)
{



 if (mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]) 


	{
		mu_active_activity_clock[mu_day][mu_wrt][mu_crmem] = (mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) + (mu_T); 
	}


}
for(int mu_day = 6; mu_day <= 8; mu_day++)
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++)
{



 if (mu_active_day_clock_started[mu_day][mu_day1]) 


	{
		mu_active_day_clock[mu_day][mu_day1] = (mu_active_day_clock[mu_day][mu_day1]) + (mu_T); 
	}


}
}

//WP WP WP WP WP
void world_class::fire_processes_minus()
{
for(int mu_day = 6; mu_day <= 8; mu_day++)
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++)
{



 if (mu_active_day_clock_started[mu_day][mu_day1]) 


	{
	}


}
}

//WP WP WP WP WP
void world_class::set_f_val()
{
  double f_val = mu_g_n.value() + mu_h_n.value();
  mu_f_n.value(f_val);
}

//WP WP WP WP WP
double world_class::get_h_val()
{
  double h_val = mu_h_n.value();
  return h_val;
}

//WP WP WP WP WP
void world_class::set_h_val()
{
  //	NON-HEURISTIC SEARCH
  // double h_val = 0; 

  //	FF RPG
  //upm_rpg::getInstance().clear_all();
  //double h_val = upm_rpg::getInstance().compute_rpg();


  //	NUMERIC RPG
  //upm_numeric_rpg::getInstance().clear_all();
  //double h_val = upm_numeric_rpg::getInstance().compute_rpg();

  //	TEMPORAL RPG
  upm_staged_rpg::getInstance().clear_all();
  double h_val = upm_staged_rpg::getInstance().compute_rpg();

  mu_h_n.value(h_val);
}

//WP WP WP WP WP
void world_class::set_h_val(int hp)
{
  double h_val = hp; 
  mu_h_n.value(h_val);
}

//WP WP WP WP WP
double world_class::get_g_val()
{
  double g_val = mu_g_n.value();
  return g_val;
}

//WP WP WP WP WP
void world_class::set_g_val(double g_val)
{
  mu_g_n.value(g_val);
}

void world_class::print(FILE *target, const char *separator)
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_all_event_true.print(target, separator);
  mu_h_n.print(target, separator);
  mu_g_n.print(target, separator);
  mu_f_n.print(target, separator);
  mu_TIME.print(target, separator);
  mu_rem_time_for_activity.print(target, separator);
  mu_rem_time_today.print(target, separator);
  mu_time_spent_today.print(target, separator);
  mu_total_time_for_activity.print(target, separator);
  mu_total_time_for_activity_per_person.print(target, separator);
  mu_active_day_clock_started.print(target, separator);
  mu_active_day_clock.print(target, separator);
  mu_active_activity_clock_started.print(target, separator);
  mu_active_activity_clock.print(target, separator);
  mu_can_perform_activity_all.print(target, separator);
  mu_in_order.print(target, separator);
  mu_can_start_activity.print(target, separator);
  mu_can_perform_activity.print(target, separator);
  mu_performing_activity.print(target, separator);
  mu_paused_activity.print(target, separator);
  mu_blocked_location.print(target, separator);
  mu_busy_crewmember.print(target, separator);
  mu_start_day.print(target, separator);
  mu_complete_day.print(target, separator);
  mu_can_pause.print(target, separator);
  mu_activity_in_progress.print(target, separator);
  mu_day_in_progress.print(target, separator);
  mu_schedule_in_progress.print(target, separator);
  mu_create_schedule_for_member.print(target, separator);
  mu_already_completed.print(target, separator);
  mu_planner_in_progress.print(target, separator);
    num_calls--;
}
}
void world_class::pddlprint(FILE *target, const char *separator)
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_TIME.print(target, separator);
  mu_rem_time_for_activity.print(target, separator);
  mu_rem_time_today.print(target, separator);
  mu_time_spent_today.print(target, separator);
  mu_total_time_for_activity.print(target, separator);
  mu_total_time_for_activity_per_person.print(target, separator);
  mu_active_day_clock_started.print(target, separator);
  mu_active_day_clock.print(target, separator);
  mu_active_activity_clock_started.print(target, separator);
  mu_active_activity_clock.print(target, separator);
  mu_can_perform_activity_all.print(target, separator);
  mu_in_order.print(target, separator);
  mu_can_start_activity.print(target, separator);
  mu_can_perform_activity.print(target, separator);
  mu_performing_activity.print(target, separator);
  mu_paused_activity.print(target, separator);
  mu_blocked_location.print(target, separator);
  mu_busy_crewmember.print(target, separator);
  mu_start_day.print(target, separator);
  mu_complete_day.print(target, separator);
  mu_can_pause.print(target, separator);
  mu_activity_in_progress.print(target, separator);
  mu_day_in_progress.print(target, separator);
  mu_schedule_in_progress.print(target, separator);
  mu_create_schedule_for_member.print(target, separator);
  mu_already_completed.print(target, separator);
  mu_planner_in_progress.print(target, separator);
    num_calls--;
}
}
double world_class::get_clock_value()
{
  return mu_TIME.value();
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_all_event_true.print_statistic();
  mu_h_n.print_statistic();
  mu_g_n.print_statistic();
  mu_f_n.print_statistic();
  mu_TIME.print_statistic();
  mu_rem_time_for_activity.print_statistic();
  mu_rem_time_today.print_statistic();
  mu_time_spent_today.print_statistic();
  mu_total_time_for_activity.print_statistic();
  mu_total_time_for_activity_per_person.print_statistic();
  mu_active_day_clock_started.print_statistic();
  mu_active_day_clock.print_statistic();
  mu_active_activity_clock_started.print_statistic();
  mu_active_activity_clock.print_statistic();
  mu_can_perform_activity_all.print_statistic();
  mu_in_order.print_statistic();
  mu_can_start_activity.print_statistic();
  mu_can_perform_activity.print_statistic();
  mu_performing_activity.print_statistic();
  mu_paused_activity.print_statistic();
  mu_blocked_location.print_statistic();
  mu_busy_crewmember.print_statistic();
  mu_start_day.print_statistic();
  mu_complete_day.print_statistic();
  mu_can_pause.print_statistic();
  mu_activity_in_progress.print_statistic();
  mu_day_in_progress.print_statistic();
  mu_schedule_in_progress.print_statistic();
  mu_create_schedule_for_member.print_statistic();
  mu_already_completed.print_statistic();
  mu_planner_in_progress.print_statistic();
    num_calls--;
}
}
void world_class::print_diff(state *prevstate, FILE *target, const char *separator)
{
  if ( prevstate != NULL )
  {
    mu_all_event_true.print_diff(prevstate,target,separator);
    mu_h_n.print_diff(prevstate,target,separator);
    mu_g_n.print_diff(prevstate,target,separator);
    mu_f_n.print_diff(prevstate,target,separator);
    mu_TIME.print_diff(prevstate,target,separator);
    mu_rem_time_for_activity.print_diff(prevstate,target,separator);
    mu_rem_time_today.print_diff(prevstate,target,separator);
    mu_time_spent_today.print_diff(prevstate,target,separator);
    mu_total_time_for_activity.print_diff(prevstate,target,separator);
    mu_total_time_for_activity_per_person.print_diff(prevstate,target,separator);
    mu_active_day_clock_started.print_diff(prevstate,target,separator);
    mu_active_day_clock.print_diff(prevstate,target,separator);
    mu_active_activity_clock_started.print_diff(prevstate,target,separator);
    mu_active_activity_clock.print_diff(prevstate,target,separator);
    mu_can_perform_activity_all.print_diff(prevstate,target,separator);
    mu_in_order.print_diff(prevstate,target,separator);
    mu_can_start_activity.print_diff(prevstate,target,separator);
    mu_can_perform_activity.print_diff(prevstate,target,separator);
    mu_performing_activity.print_diff(prevstate,target,separator);
    mu_paused_activity.print_diff(prevstate,target,separator);
    mu_blocked_location.print_diff(prevstate,target,separator);
    mu_busy_crewmember.print_diff(prevstate,target,separator);
    mu_start_day.print_diff(prevstate,target,separator);
    mu_complete_day.print_diff(prevstate,target,separator);
    mu_can_pause.print_diff(prevstate,target,separator);
    mu_activity_in_progress.print_diff(prevstate,target,separator);
    mu_day_in_progress.print_diff(prevstate,target,separator);
    mu_schedule_in_progress.print_diff(prevstate,target,separator);
    mu_create_schedule_for_member.print_diff(prevstate,target,separator);
    mu_already_completed.print_diff(prevstate,target,separator);
    mu_planner_in_progress.print_diff(prevstate,target,separator);
  }
  else
print(target,separator);
}
void world_class::to_state(state *newstate)
{
  mu_all_event_true.to_state( newstate );
  mu_h_n.to_state( newstate );
  mu_g_n.to_state( newstate );
  mu_f_n.to_state( newstate );
  mu_TIME.to_state( newstate );
  mu_rem_time_for_activity.to_state( newstate );
  mu_rem_time_today.to_state( newstate );
  mu_time_spent_today.to_state( newstate );
  mu_total_time_for_activity.to_state( newstate );
  mu_total_time_for_activity_per_person.to_state( newstate );
  mu_active_day_clock_started.to_state( newstate );
  mu_active_day_clock.to_state( newstate );
  mu_active_activity_clock_started.to_state( newstate );
  mu_active_activity_clock.to_state( newstate );
  mu_can_perform_activity_all.to_state( newstate );
  mu_in_order.to_state( newstate );
  mu_can_start_activity.to_state( newstate );
  mu_can_perform_activity.to_state( newstate );
  mu_performing_activity.to_state( newstate );
  mu_paused_activity.to_state( newstate );
  mu_blocked_location.to_state( newstate );
  mu_busy_crewmember.to_state( newstate );
  mu_start_day.to_state( newstate );
  mu_complete_day.to_state( newstate );
  mu_can_pause.to_state( newstate );
  mu_activity_in_progress.to_state( newstate );
  mu_day_in_progress.to_state( newstate );
  mu_schedule_in_progress.to_state( newstate );
  mu_create_schedule_for_member.to_state( newstate );
  mu_already_completed.to_state( newstate );
  mu_planner_in_progress.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    return tsprintf(" time passing ");
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    return mu_true;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;



    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;



    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;



    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;



    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;


    effs.push_back(&(mu_TIME));  // (mu_TIME) + (mu_T) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;



    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;



    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    aeffs.push_back(&(mu_TIME)); //  (mu_TIME) + (mu_T) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 0;
    while (what_rule < 1 )
      {
	if ( ( TRUE  ) ) {
	      if (mu_true) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
mu_TIME = (mu_TIME) + (mu_T);
mu_event_check (  );
mu_apply_continuous_change (  );
mu_event_check (  );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {





  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {



mu_TIME = (mu_TIME) + (mu_T);


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {





  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {





  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    return 1;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    return Duration(r);
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    return tsprintf("( time passing )");
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Clock;
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf(" active_activity_end , crmem:%s, wrt:%s, day:%s", mu_crmem.Name(), mu_wrt.Name(), mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_all_event_true) ; 
}
    return mu__boolexpr80;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_all_event_true) ; 
}
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr127;
bool mu__boolexpr128;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr132;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
bool mu__boolexpr133;
bool mu__boolexpr134;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr135;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}

 		if (std::string(typeid(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_busy_crewmember[mu_crmem])); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_performing_activity[mu_wrt][mu_crmem])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_all_event_true) ; 
}
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr181;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
bool mu__boolexpr182;
bool mu__boolexpr183;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr184;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}

 	if (std::string(typeid(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]), std::make_pair(0.000000e+00, 3))); 
	} 
 	if (std::string(typeid(mu_rem_time_today[mu_crmem][mu_day]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_rem_time_today[mu_crmem][mu_day]), std::make_pair(0.000000e+00, 3))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
 	if (std::string(typeid(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem])); 
 	if (std::string(typeid(mu_rem_time_today[mu_crmem][mu_day]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_rem_time_today[mu_crmem][mu_day])); 
 		if (std::string(typeid(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_busy_crewmember[mu_crmem])); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_performing_activity[mu_wrt][mu_crmem])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr185;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_all_event_true) ; 
}
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr225;
bool mu__boolexpr226;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr230;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr233;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}

 		if (std::string(typeid(mu_already_completed[mu_wrt][mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_already_completed[mu_wrt][mu_crmem][mu_day]), 0)); 
 		if (std::string(typeid(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]), 1)); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_all_event_true), 1)); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 1)); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_all_event_true) ; 
}
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr274;
bool mu__boolexpr275;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr279;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
bool mu__boolexpr280;
bool mu__boolexpr281;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
bool mu__boolexpr282;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}

 	if (std::string(typeid(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]).name()).compare("14mu_1_real_type") == 0)
			temporal_cons = std::make_pair(0.000000e+00 + mu_T, TIME_INFINITY); 

    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    effs.push_back(&(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]));  // 0.000000e+00 
    effs.push_back(&(mu_rem_time_today[mu_crmem][mu_day]));  // decrease_rem_time_today_duraction_end_active_activity( mu_rem_time_today[mu_crmem][mu_day], mu_total_time_for_activity_per_person[mu_wrt][mu_day] ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    aeffs.push_back(&(mu_already_completed[mu_wrt][mu_crmem][mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_already_completed[mu_wrt][mu_crmem][mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    aeffs.push_back(&(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem])); //  0.000000e+00 
    aeffs.push_back(&(mu_already_completed[mu_wrt][mu_crmem][mu_day])); //  mu_true 
    aeffs.push_back(&(mu_rem_time_today[mu_crmem][mu_day])); //  decrease_rem_time_today_duraction_end_active_activity( mu_rem_time_today[mu_crmem][mu_day], mu_total_time_for_activity_per_person[mu_wrt][mu_day] ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    while (what_rule < 13 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
  if (!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) == (mu_total_time_for_activity_per_person[mu_wrt][mu_day])) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = (mu_performing_activity[mu_wrt][mu_crmem]) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_all_event_true) ; 
}
	      if (mu__boolexpr283) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] = mu_false;
mu_active_activity_clock[mu_day][mu_wrt][mu_crmem] = 0.000000e+00;
mu_busy_crewmember[mu_crmem] = mu_false;
mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;
mu_rem_time_today[mu_crmem][mu_day] = decrease_rem_time_today_duraction_end_active_activity( mu_rem_time_today[mu_crmem][mu_day], mu_total_time_for_activity_per_person[mu_wrt][mu_day] );
mu_performing_activity[mu_wrt][mu_crmem] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_activity_clock[mu_day][mu_wrt][mu_crmem] = 0.000000e+00;
mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;
mu_rem_time_today[mu_crmem][mu_day] = decrease_rem_time_today_duraction_end_active_activity( mu_rem_time_today[mu_crmem][mu_day], mu_total_time_for_activity_per_person[mu_wrt][mu_day] );


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

pr.insert(std::make_pair(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]), &(mu_active_activity_clock[mu_day][mu_wrt][mu_crmem]))); 
return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf("( active_activity %s %s %s)", mu_day.Name(), mu_wrt.Name(), mu_crmem.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::DurativeEnd;
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf(" active_activity_start , crmem:%s, wrt:%s, day:%s", mu_crmem.Name(), mu_wrt.Name(), mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
bool mu__boolexpr294;
bool mu__boolexpr295;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr294)) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_all_event_true) ; 
}
    return mu__boolexpr290;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_all_event_true) ; 
}
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
bool mu__boolexpr315;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr328;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr329;
bool mu__boolexpr330;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr331;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_all_event_true) ; 
}
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr355;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr359;
bool mu__boolexpr360;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr364;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr365;
bool mu__boolexpr366;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr367;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_day_in_progress[mu_day]) ; 
}

 	if (std::string(typeid(mu_rem_time_today[mu_crmem][mu_day]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_rem_time_today[mu_crmem][mu_day]), std::make_pair(0.000000e+00, 3))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
 	if (std::string(typeid(mu_rem_time_today[mu_crmem][mu_day]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_rem_time_today[mu_crmem][mu_day])); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (mu_all_event_true) ; 
}
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr383;
bool mu__boolexpr384;
bool mu__boolexpr385;
bool mu__boolexpr386;
bool mu__boolexpr387;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr388;
bool mu__boolexpr389;
bool mu__boolexpr390;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr391;
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr392)) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr395;
bool mu__boolexpr396;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr400;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr401;
bool mu__boolexpr402;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr403;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]), 0)); 
 		if (std::string(typeid(mu_already_completed[mu_wrt][mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_already_completed[mu_wrt][mu_crmem][mu_day]), 0)); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 0)); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem]), 0)); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_all_event_true), 1)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
bool mu__boolexpr408;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr409;
bool mu__boolexpr410;
bool mu__boolexpr411;
bool mu__boolexpr412;
bool mu__boolexpr413;
bool mu__boolexpr414;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr414)) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr413)) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_all_event_true) ; 
}
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr419;
bool mu__boolexpr420;
bool mu__boolexpr421;
bool mu__boolexpr422;
bool mu__boolexpr423;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
bool mu__boolexpr430;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr431;
bool mu__boolexpr432;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr433;
bool mu__boolexpr434;
bool mu__boolexpr435;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
bool mu__boolexpr436;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr437;
bool mu__boolexpr438;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
bool mu__boolexpr439;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = (mu_day_in_progress[mu_day]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    aeffs.push_back(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_busy_crewmember[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_performing_activity[mu_wrt][mu_crmem])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    aeffs.push_back(&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_busy_crewmember[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_performing_activity[mu_wrt][mu_crmem])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 13;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    while (what_rule < 25 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
  if (!(!(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem]))) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = (!(mu_performing_activity[mu_wrt][mu_crmem])) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_rem_time_today[mu_crmem][mu_day]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (mu_all_event_true) ; 
}
	      if (mu__boolexpr440) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 13;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_performing_activity[mu_wrt][mu_crmem] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_performing_activity[mu_wrt][mu_crmem] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_performing_activity[mu_wrt][mu_crmem] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_performing_activity[mu_wrt][mu_crmem] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

return (&(mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem])); 


  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 2) + 1);
    r = r / 2;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 2) + 3);
    r = r / 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf("( active_activity %s %s %s)", mu_day.Name(), mu_wrt.Name(), mu_crmem.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::DurativeStart;
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf(" active_day_end , day1:%s, day:%s", mu_day1.Name(), mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = (mu_all_event_true) ; 
}
    return mu__boolexpr446;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr453;
bool mu__boolexpr454;
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
bool mu__boolexpr463;
bool mu__boolexpr464;
bool mu__boolexpr465;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr463)) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = (mu_all_event_true) ; 
}
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
bool mu__boolexpr470;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr471;
bool mu__boolexpr472;
bool mu__boolexpr473;
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
bool mu__boolexpr484;
bool mu__boolexpr485;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr486;
bool mu__boolexpr487;
bool mu__boolexpr488;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr489;
bool mu__boolexpr490;
bool mu__boolexpr491;
bool mu__boolexpr492;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr492)) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr493;
bool mu__boolexpr494;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr498;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
bool mu__boolexpr499;
bool mu__boolexpr500;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr501;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}

 		if (std::string(typeid(mu_active_day_clock_started[mu_day][mu_day1]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_active_day_clock_started[mu_day][mu_day1])); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_complete_day[mu_day1])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_in_order[mu_day1][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_in_order[mu_day1][mu_day])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr502;
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr503)) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
bool mu__boolexpr511;
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr511)) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_all_event_true) ; 
}
bool mu__boolexpr515;
bool mu__boolexpr516;
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr520;
bool mu__boolexpr521;
bool mu__boolexpr522;
bool mu__boolexpr523;
bool mu__boolexpr524;
bool mu__boolexpr525;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr523)) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr526;
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
bool mu__boolexpr533;
bool mu__boolexpr534;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr534)) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr533)) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr535;
bool mu__boolexpr536;
bool mu__boolexpr537;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr538;
bool mu__boolexpr539;
bool mu__boolexpr540;
bool mu__boolexpr541;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr542;
bool mu__boolexpr543;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
  mu__boolexpr542 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr547;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
bool mu__boolexpr548;
bool mu__boolexpr549;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr550;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}

 	if (std::string(typeid(mu_active_day_clock[mu_day][mu_day1]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_active_day_clock[mu_day][mu_day1]), std::make_pair(0.000000e+00, 3))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
 	if (std::string(typeid(mu_active_day_clock[mu_day][mu_day1]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_active_day_clock[mu_day][mu_day1])); 
 		if (std::string(typeid(mu_active_day_clock_started[mu_day][mu_day1]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_active_day_clock_started[mu_day][mu_day1])); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_complete_day[mu_day1])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_in_order[mu_day1][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_in_order[mu_day1][mu_day])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr551;
bool mu__boolexpr552;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr557;
bool mu__boolexpr558;
bool mu__boolexpr559;
bool mu__boolexpr560;
bool mu__boolexpr561;
bool mu__boolexpr562;
bool mu__boolexpr563;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr562)) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr560)) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = (mu_all_event_true) ; 
}
bool mu__boolexpr564;
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
bool mu__boolexpr568;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr569;
bool mu__boolexpr570;
bool mu__boolexpr571;
bool mu__boolexpr572;
bool mu__boolexpr573;
bool mu__boolexpr574;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr573)) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr571)) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr575;
bool mu__boolexpr576;
bool mu__boolexpr577;
bool mu__boolexpr578;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr579;
bool mu__boolexpr580;
bool mu__boolexpr581;
bool mu__boolexpr582;
bool mu__boolexpr583;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr583)) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr584;
bool mu__boolexpr585;
bool mu__boolexpr586;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr587;
bool mu__boolexpr588;
bool mu__boolexpr589;
bool mu__boolexpr590;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr590)) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr591;
bool mu__boolexpr592;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr592)) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr593;
bool mu__boolexpr594;
bool mu__boolexpr595;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr596;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
bool mu__boolexpr597;
bool mu__boolexpr598;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr598)) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr599;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}

 		if (std::string(typeid(mu_complete_day[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_complete_day[mu_day]), 0)); 
 		if (std::string(typeid(mu_active_day_clock_started[mu_day][mu_day1]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_active_day_clock_started[mu_day][mu_day1]), 1)); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_all_event_true), 1)); 
 		if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_complete_day[mu_day1]), 1)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 
 		if (std::string(typeid(mu_in_order[mu_day1][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_in_order[mu_day1][mu_day]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr600;
bool mu__boolexpr601;
bool mu__boolexpr602;
bool mu__boolexpr603;
bool mu__boolexpr604;
bool mu__boolexpr605;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr604)) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr602)) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr606;
bool mu__boolexpr607;
bool mu__boolexpr608;
bool mu__boolexpr609;
bool mu__boolexpr610;
bool mu__boolexpr611;
bool mu__boolexpr612;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr610)) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr607)) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = (mu_all_event_true) ; 
}
bool mu__boolexpr613;
bool mu__boolexpr614;
bool mu__boolexpr615;
bool mu__boolexpr616;
bool mu__boolexpr617;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr616)) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr615)) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr614)) mu__boolexpr613 = FALSE ;
  else {
  mu__boolexpr613 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr618;
bool mu__boolexpr619;
bool mu__boolexpr620;
bool mu__boolexpr621;
bool mu__boolexpr622;
bool mu__boolexpr623;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr623 = FALSE ;
  else {
  mu__boolexpr623 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr623)) mu__boolexpr622 = FALSE ;
  else {
  mu__boolexpr622 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr622)) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr620)) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
bool mu__boolexpr624;
bool mu__boolexpr625;
bool mu__boolexpr626;
bool mu__boolexpr627;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr627)) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr626)) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr628;
bool mu__boolexpr629;
bool mu__boolexpr630;
bool mu__boolexpr631;
bool mu__boolexpr632;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr632)) mu__boolexpr631 = FALSE ;
  else {
  mu__boolexpr631 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr631)) mu__boolexpr630 = FALSE ;
  else {
  mu__boolexpr630 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr630)) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr633;
bool mu__boolexpr634;
bool mu__boolexpr635;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr635)) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr634)) mu__boolexpr633 = FALSE ;
  else {
  mu__boolexpr633 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr636;
bool mu__boolexpr637;
bool mu__boolexpr638;
bool mu__boolexpr639;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr637)) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr640;
bool mu__boolexpr641;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr642;
bool mu__boolexpr643;
bool mu__boolexpr644;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr645;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
bool mu__boolexpr646;
bool mu__boolexpr647;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr647)) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr648;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}

 	if (std::string(typeid(mu_active_day_clock[mu_day][mu_day1]).name()).compare("14mu_1_real_type") == 0)
			temporal_cons = std::make_pair(0.000000e+00 + mu_T, TIME_INFINITY); 

    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    effs.push_back(&(mu_active_day_clock[mu_day][mu_day1]));  // 0.000000e+00 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    aeffs.push_back(&(mu_complete_day[mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_active_day_clock_started[mu_day][mu_day1]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_complete_day[mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    aeffs.push_back(&(mu_active_day_clock[mu_day][mu_day1])); //  0.000000e+00 
    aeffs.push_back(&(mu_complete_day[mu_day])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 25;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    while (what_rule < 34 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr649;
bool mu__boolexpr650;
bool mu__boolexpr651;
bool mu__boolexpr652;
bool mu__boolexpr653;
bool mu__boolexpr654;
bool mu__boolexpr655;
  if (!(mu_active_day_clock_started[mu_day][mu_day1])) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = ((mu_active_day_clock[mu_day][mu_day1]) == (2.400000e+01)) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr654)) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr653)) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr652)) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = ((mu_active_day_clock[mu_day][mu_day1]) > (0.000000e+00)) ; 
}
  if (!(mu__boolexpr650)) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = (mu_all_event_true) ; 
}
	      if (mu__boolexpr649) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 25;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
mu_active_day_clock_started[mu_day][mu_day1] = mu_false;
mu_active_day_clock[mu_day][mu_day1] = 0.000000e+00;
mu_complete_day[mu_day] = mu_true;
mu_day_in_progress[mu_day] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_day_clock[mu_day][mu_day1] = 0.000000e+00;
mu_complete_day[mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

pr.insert(std::make_pair(&(mu_active_day_clock_started[mu_day][mu_day1]), &(mu_active_day_clock[mu_day][mu_day1]))); 
return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf("( active_day %s %s)", mu_day.Name(), mu_day1.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::DurativeEnd;
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf(" active_day_start , day1:%s, day:%s", mu_day1.Name(), mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
bool mu__boolexpr656;
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
bool mu__boolexpr660;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr660)) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = (mu_all_event_true) ; 
}
    return mu__boolexpr656;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr661;
bool mu__boolexpr662;
bool mu__boolexpr663;
bool mu__boolexpr664;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr664)) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr663)) mu__boolexpr662 = FALSE ;
  else {
  mu__boolexpr662 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr662)) mu__boolexpr661 = FALSE ;
  else {
  mu__boolexpr661 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr665;
bool mu__boolexpr666;
bool mu__boolexpr667;
bool mu__boolexpr668;
bool mu__boolexpr669;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr668)) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr666)) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = (mu_all_event_true) ; 
}
bool mu__boolexpr670;
bool mu__boolexpr671;
bool mu__boolexpr672;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr672)) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr671)) mu__boolexpr670 = FALSE ;
  else {
  mu__boolexpr670 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr673;
bool mu__boolexpr674;
bool mu__boolexpr675;
bool mu__boolexpr676;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr675)) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr674)) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr677;
bool mu__boolexpr678;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr679;
bool mu__boolexpr680;
bool mu__boolexpr681;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr681)) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr680)) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr682;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = (!(mu_day_in_progress[mu_day])) ; 
}
bool mu__boolexpr683;
bool mu__boolexpr684;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr684)) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr685;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = (!(mu_day_in_progress[mu_day])) ; 
}

 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_complete_day[mu_day1])); 
 		if (std::string(typeid(mu_in_order[mu_day1][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_in_order[mu_day1][mu_day])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr686;
bool mu__boolexpr687;
bool mu__boolexpr688;
bool mu__boolexpr689;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr688)) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr687)) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr690;
bool mu__boolexpr691;
bool mu__boolexpr692;
bool mu__boolexpr693;
bool mu__boolexpr694;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr694)) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr693)) mu__boolexpr692 = FALSE ;
  else {
  mu__boolexpr692 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr692)) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr691)) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = (mu_all_event_true) ; 
}
bool mu__boolexpr695;
bool mu__boolexpr696;
bool mu__boolexpr697;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr698;
bool mu__boolexpr699;
bool mu__boolexpr700;
bool mu__boolexpr701;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr701 = FALSE ;
  else {
  mu__boolexpr701 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr701)) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr699)) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr702;
bool mu__boolexpr703;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr703 = FALSE ;
  else {
  mu__boolexpr703 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr703)) mu__boolexpr702 = FALSE ;
  else {
  mu__boolexpr702 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr704;
bool mu__boolexpr705;
bool mu__boolexpr706;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr707;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = (!(mu_day_in_progress[mu_day])) ; 
}
bool mu__boolexpr708;
bool mu__boolexpr709;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr710;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr710 = FALSE ;
  else {
  mu__boolexpr710 = (!(mu_day_in_progress[mu_day])) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_all_event_true)); 
 		if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_complete_day[mu_day1])); 
 		if (std::string(typeid(mu_in_order[mu_day1][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_in_order[mu_day1][mu_day])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr711;
bool mu__boolexpr712;
bool mu__boolexpr713;
bool mu__boolexpr714;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr714)) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr713)) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr712)) mu__boolexpr711 = FALSE ;
  else {
  mu__boolexpr711 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr715;
bool mu__boolexpr716;
bool mu__boolexpr717;
bool mu__boolexpr718;
bool mu__boolexpr719;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr718)) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = (mu_all_event_true) ; 
}
bool mu__boolexpr720;
bool mu__boolexpr721;
bool mu__boolexpr722;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr722 = FALSE ;
  else {
  mu__boolexpr722 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr722)) mu__boolexpr721 = FALSE ;
  else {
  mu__boolexpr721 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr721)) mu__boolexpr720 = FALSE ;
  else {
  mu__boolexpr720 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr723;
bool mu__boolexpr724;
bool mu__boolexpr725;
bool mu__boolexpr726;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr725)) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr724)) mu__boolexpr723 = FALSE ;
  else {
  mu__boolexpr723 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr727;
bool mu__boolexpr728;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
  mu__boolexpr727 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr729;
bool mu__boolexpr730;
bool mu__boolexpr731;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr731 = FALSE ;
  else {
  mu__boolexpr731 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr731)) mu__boolexpr730 = FALSE ;
  else {
  mu__boolexpr730 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr730)) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr732;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr732 = FALSE ;
  else {
  mu__boolexpr732 = (!(mu_day_in_progress[mu_day])) ; 
}
bool mu__boolexpr733;
bool mu__boolexpr734;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr734)) mu__boolexpr733 = FALSE ;
  else {
  mu__boolexpr733 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr735;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = (!(mu_day_in_progress[mu_day])) ; 
}

 		if (std::string(typeid(mu_active_day_clock_started[mu_day][mu_day1]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_active_day_clock_started[mu_day][mu_day1]), 0)); 
 		if (std::string(typeid(mu_complete_day[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_complete_day[mu_day]), 0)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 0)); 
 		if (std::string(typeid(mu_all_event_true).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_all_event_true), 1)); 
 		if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_complete_day[mu_day1]), 1)); 
 		if (std::string(typeid(mu_in_order[mu_day1][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_in_order[mu_day1][mu_day]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

bool mu__boolexpr736;
bool mu__boolexpr737;
bool mu__boolexpr738;
bool mu__boolexpr739;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr739)) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr737)) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr740;
bool mu__boolexpr741;
bool mu__boolexpr742;
bool mu__boolexpr743;
bool mu__boolexpr744;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr744)) mu__boolexpr743 = FALSE ;
  else {
  mu__boolexpr743 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr743)) mu__boolexpr742 = FALSE ;
  else {
  mu__boolexpr742 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr742)) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr741)) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = (mu_all_event_true) ; 
}
bool mu__boolexpr745;
bool mu__boolexpr746;
bool mu__boolexpr747;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr748;
bool mu__boolexpr749;
bool mu__boolexpr750;
bool mu__boolexpr751;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr751 = FALSE ;
  else {
  mu__boolexpr751 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr751)) mu__boolexpr750 = FALSE ;
  else {
  mu__boolexpr750 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr750)) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr749)) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr752;
bool mu__boolexpr753;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr753 = FALSE ;
  else {
  mu__boolexpr753 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr753)) mu__boolexpr752 = FALSE ;
  else {
  mu__boolexpr752 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr754;
bool mu__boolexpr755;
bool mu__boolexpr756;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr755)) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr757;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = (!(mu_day_in_progress[mu_day])) ; 
}
bool mu__boolexpr758;
bool mu__boolexpr759;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr759)) mu__boolexpr758 = FALSE ;
  else {
  mu__boolexpr758 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr760;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr760 = FALSE ;
  else {
  mu__boolexpr760 = (!(mu_day_in_progress[mu_day])) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    aeffs.push_back(&(mu_active_day_clock_started[mu_day][mu_day1])); //  mu_true 
    aeffs.push_back(&(mu_day_in_progress[mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_active_day_clock_started[mu_day][mu_day1]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    aeffs.push_back(&(mu_active_day_clock_started[mu_day][mu_day1])); //  mu_true 
    aeffs.push_back(&(mu_day_in_progress[mu_day])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 34;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    while (what_rule < 43 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr761;
bool mu__boolexpr762;
bool mu__boolexpr763;
bool mu__boolexpr764;
bool mu__boolexpr765;
  if (!(!(mu_active_day_clock_started[mu_day][mu_day1]))) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = (!(mu_day_in_progress[mu_day])) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr764)) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = (mu_in_order[mu_day1][mu_day]) ; 
}
  if (!(mu__boolexpr763)) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr762)) mu__boolexpr761 = FALSE ;
  else {
  mu__boolexpr761 = (mu_all_event_true) ; 
}
	      if (mu__boolexpr761) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 34;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
mu_active_day_clock_started[mu_day][mu_day1] = mu_true;
mu_day_in_progress[mu_day] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_day_clock_started[mu_day][mu_day1] = mu_true;
mu_day_in_progress[mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_day_clock_started[mu_day][mu_day1] = mu_true;
mu_day_in_progress[mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

mu_active_day_clock_started[mu_day][mu_day1] = mu_true;
mu_day_in_progress[mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

return (&(mu_active_day_clock_started[mu_day][mu_day1])); 


  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 6);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 6);
    r = r / 3;
    return tsprintf("( active_day %s %s)", mu_day.Name(), mu_day1.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::DurativeStart;
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
public:
void SetNextEnabledRule(RULE_INDEX_TYPE & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<13)
    { R1.NextRule(what_rule);
      if (what_rule<13) return; }
  if (what_rule>=13 && what_rule<25)
    { R2.NextRule(what_rule);
      if (what_rule<25) return; }
  if (what_rule>=25 && what_rule<34)
    { R3.NextRule(what_rule);
      if (what_rule<34) return; }
  if (what_rule>=34 && what_rule<43)
    { R4.NextRule(what_rule);
      if (what_rule<43) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=12) return R1.Condition(r-1);
  if (r>=13 && r<=24) return R2.Condition(r-13);
  if (r>=25 && r<=33) return R3.Condition(r-25);
  if (r>=34 && r<=42) return R4.Condition(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=12) return R1.bool_precond_array(r-1);
  if (r>=13 && r<=24) return R2.bool_precond_array(r-13);
  if (r>=25 && r<=33) return R3.bool_precond_array(r-25);
  if (r>=34 && r<=42) return R4.bool_precond_array(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=12) return R1.num_precond_array(r-1);
  if (r>=13 && r<=24) return R2.num_precond_array(r-13);
  if (r>=25 && r<=33) return R3.num_precond_array(r-25);
  if (r>=34 && r<=42) return R4.num_precond_array(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=12) return R1.all_precond_array(r-1);
  if (r>=13 && r<=24) return R2.all_precond_array(r-13);
  if (r>=25 && r<=33) return R3.all_precond_array(r-25);
  if (r>=34 && r<=42) return R4.all_precond_array(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=12) return R1.precond_bool_interference(r-1);
  if (r>=13 && r<=24) return R2.precond_bool_interference(r-13);
  if (r>=25 && r<=33) return R3.precond_bool_interference(r-25);
  if (r>=34 && r<=42) return R4.precond_bool_interference(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=12) return R1.temporal_constraints(r-1);
  if (r>=13 && r<=24) return R2.temporal_constraints(r-13);
  if (r>=25 && r<=33) return R3.temporal_constraints(r-25);
  if (r>=34 && r<=42) return R4.temporal_constraints(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=12) return R1.effects_bool_interference(r-1);
  if (r>=13 && r<=24) return R2.effects_bool_interference(r-13);
  if (r>=25 && r<=33) return R3.effects_bool_interference(r-25);
  if (r>=34 && r<=42) return R4.effects_bool_interference(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=12) return R1.effects_add_bool_array(r-1);
  if (r>=13 && r<=24) return R2.effects_add_bool_array(r-13);
  if (r>=25 && r<=33) return R3.effects_add_bool_array(r-25);
  if (r>=34 && r<=42) return R4.effects_add_bool_array(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=12) return R1.effects_num_array(r-1);
  if (r>=13 && r<=24) return R2.effects_num_array(r-13);
  if (r>=25 && r<=33) return R3.effects_num_array(r-25);
  if (r>=34 && r<=42) return R4.effects_num_array(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=12) return R1.effects_all_array(r-1);
  if (r>=13 && r<=24) return R2.effects_all_array(r-13);
  if (r>=25 && r<=33) return R3.effects_all_array(r-25);
  if (r>=34 && r<=42) return R4.effects_all_array(r-34);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code(r-25); return; } 
  if (r>=34 && r<=42) { R4.Code(r-34); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code_ff(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code_ff(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code_ff(r-25); return; } 
  if (r>=34 && r<=42) { R4.Code_ff(r-34); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code_numeric_ff_plus(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code_numeric_ff_plus(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code_numeric_ff_plus(r-25); return; } 
  if (r>=34 && r<=42) { R4.Code_numeric_ff_plus(r-34); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code_numeric_ff_minus(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code_numeric_ff_minus(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code_numeric_ff_minus(r-25); return; } 
  if (r>=34 && r<=42) { R4.Code_numeric_ff_minus(r-34); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=12) { return R1.get_rule_clock_started(r-1); } 
  if (r>=13 && r<=24) { return R2.get_rule_clock_started(r-13); } 
  if (r>=25 && r<=33) { return R3.get_rule_clock_started(r-25); } 
  if (r>=34 && r<=42) { return R4.get_rule_clock_started(r-34); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=12) { return R1.get_clocks(r-1); } 
  if (r>=13 && r<=24) { return R2.get_clocks(r-13); } 
  if (r>=25 && r<=33) { return R3.get_clocks(r-25); } 
  if (r>=34 && r<=42) { return R4.get_clocks(r-34); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=12) { return R1.Priority(); } 
  if (r>=13 && r<=24) { return R2.Priority(); } 
  if (r>=25 && r<=33) { return R3.Priority(); } 
  if (r>=34 && r<=42) { return R4.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=12) return R1.Name(r-1);
  if (r>=13 && r<=24) return R2.Name(r-13);
  if (r>=25 && r<=33) return R3.Name(r-25);
  if (r>=34 && r<=42) return R4.Name(r-34);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=12) return R1.Duration(r-1);
  if (r>=13 && r<=24) return R2.Duration(r-13);
  if (r>=25 && r<=33) return R3.Duration(r-25);
  if (r>=34 && r<=42) return R4.Duration(r-34);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=12) return R1.Weight(r-1);
  if (r>=13 && r<=24) return R2.Weight(r-13);
  if (r>=25 && r<=33) return R3.Weight(r-25);
  if (r>=34 && r<=42) return R4.Weight(r-34);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=12) return R1.PDDLName(r-1);
  if (r>=13 && r<=24) return R2.PDDLName(r-13);
  if (r>=25 && r<=33) return R3.PDDLName(r-25);
  if (r>=34 && r<=42) return R4.PDDLName(r-34);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=12) return R1.PDDLClass(r-1);
  if (r>=13 && r<=24) return R2.PDDLClass(r-13);
  if (r>=25 && r<=33) return R3.PDDLClass(r-25);
  if (r>=34 && r<=42) return R4.PDDLClass(r-34);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 43;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 43


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("start");
  }
  void Code(unsigned short r)
  {
mu_TIME = 0.000000e+00;
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_can_perform_activity_all ( mu_crmem, mu_day, mu_false );
};
};
};
};
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_in_order ( mu_day1, mu_day, mu_false );
};
};
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
mu_set_can_start_activity ( mu_crmem, mu_wrt, mu_false );
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_set_can_perform_activity ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_set_performing_activity ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_set_paused_activity ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_loc = 5; mu_loc <= 5; mu_loc++) {
mu_set_blocked_location ( mu_loc, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_set_busy_crewmember ( mu_crmem, mu_false );
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_start_day ( mu_day, mu_false );
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_complete_day ( mu_day, mu_false );
};
};
{
for(int mu_act1 = 3; mu_act1 <= 4; mu_act1++) {
{
for(int mu_act2 = 3; mu_act2 <= 4; mu_act2++) {
mu_set_can_pause ( mu_act1, mu_act2, mu_false );
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_set_activity_in_progress ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_day_in_progress ( mu_day, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_set_schedule_in_progress ( mu_crmem, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_create_schedule_for_member ( mu_crmem, mu_day, mu_false );
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_already_completed ( mu_wrt, mu_crmem, mu_day, mu_false );
};
};
};
};
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_set_planner_in_progress ( mu_crmem, mu_wrt, mu_day, mu_false );
};
};
};
};
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_time_spent_today[mu_crmem] = 0.000000e+00;
};
};
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_rem_time_today[mu_crmem][mu_day] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_rem_time_for_activity[mu_wrt][mu_crmem] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_total_time_for_activity[mu_wrt][mu_day] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
mu_total_time_for_activity_per_person[mu_wrt][mu_day] = 0.000000e+00;
};
};
};
};
mu_in_order[mu_day0][mu_day1] = mu_true;
mu_in_order[mu_day1][mu_day2] = mu_true;
mu_complete_day[mu_day0] = mu_true;
mu_rem_time_today[mu_a][mu_day1] = 2.400000e+01;
mu_rem_time_today[mu_b][mu_day1] = 2.400000e+01;
mu_rem_time_today[mu_a][mu_day2] = 2.400000e+01;
mu_rem_time_today[mu_b][mu_day2] = 2.400000e+01;
mu_total_time_for_activity_per_person[mu_work][mu_day1] = 1.200000e+01;
mu_total_time_for_activity_per_person[mu_exercise][mu_day1] = 1.200000e+01;
mu_total_time_for_activity_per_person[mu_work][mu_day2] = 1.200000e+01;
mu_total_time_for_activity_per_person[mu_exercise][mu_day2] = 1.200000e+01;
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_wrt = 3; mu_wrt <= 4; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 2; mu_crmem++) {
mu_active_activity_clock_started[mu_day][mu_wrt][mu_crmem] = mu_false;
mu_active_activity_clock[mu_day][mu_wrt][mu_crmem] = 0.000000e+00;
};
};
};
};
};
};
{
for(int mu_day = 6; mu_day <= 8; mu_day++) {
{
for(int mu_day1 = 6; mu_day1 <= 8; mu_day1++) {
mu_active_day_clock_started[mu_day][mu_day1] = mu_false;
mu_active_day_clock[mu_day][mu_day1] = 0.000000e+00;
};
};
};
};
mu_all_event_true = mu_true;
mu_g_n = 0;
mu_h_n = 0;
mu_f_n = 0;
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Goal records
 ********************/

// WP WP WP GOAL
int mu__goal_766() // Goal "enjoy"
{
bool mu__boolexpr767;
bool mu__boolexpr768;
bool mu__boolexpr769;
bool mu__boolexpr770;
bool mu__boolexpr771;
bool mu__boolexpr772;
bool mu__boolexpr773;
bool mu__boolexpr774;
bool mu__boolexpr775;
bool mu__boolexpr776;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr776)) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr775)) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr774)) mu__boolexpr773 = FALSE ;
  else {
  mu__boolexpr773 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr773)) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr772)) mu__boolexpr771 = FALSE ;
  else {
  mu__boolexpr771 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr771)) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr770)) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = ((mu_rem_time_today[mu_a][mu_day2]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = ((mu_rem_time_today[mu_b][mu_day2]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr768)) mu__boolexpr767 = FALSE ;
  else {
  mu__boolexpr767 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr767;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr777;
bool mu__boolexpr778;
bool mu__boolexpr779;
bool mu__boolexpr780;
bool mu__boolexpr781;
bool mu__boolexpr782;
bool mu__boolexpr783;
bool mu__boolexpr784;
bool mu__boolexpr785;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr785)) mu__boolexpr784 = FALSE ;
  else {
  mu__boolexpr784 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr784)) mu__boolexpr783 = FALSE ;
  else {
  mu__boolexpr783 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr783)) mu__boolexpr782 = FALSE ;
  else {
  mu__boolexpr782 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr782)) mu__boolexpr781 = FALSE ;
  else {
  mu__boolexpr781 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr781)) mu__boolexpr780 = FALSE ;
  else {
  mu__boolexpr780 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr780)) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = ((mu_rem_time_today[mu_a][mu_day2]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = ((mu_rem_time_today[mu_b][mu_day2]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr786;
bool mu__boolexpr787;
bool mu__boolexpr788;
bool mu__boolexpr789;
bool mu__boolexpr790;
bool mu__boolexpr791;
bool mu__boolexpr792;
bool mu__boolexpr793;
bool mu__boolexpr794;
bool mu__boolexpr795;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr794)) mu__boolexpr793 = FALSE ;
  else {
  mu__boolexpr793 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr793)) mu__boolexpr792 = FALSE ;
  else {
  mu__boolexpr792 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr792)) mu__boolexpr791 = FALSE ;
  else {
  mu__boolexpr791 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr791)) mu__boolexpr790 = FALSE ;
  else {
  mu__boolexpr790 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr790)) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr789)) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = ((mu_rem_time_today[mu_a][mu_day2]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = ((mu_rem_time_today[mu_b][mu_day2]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr787)) mu__boolexpr786 = FALSE ;
  else {
  mu__boolexpr786 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr796;
bool mu__boolexpr797;
bool mu__boolexpr798;
bool mu__boolexpr799;
bool mu__boolexpr800;
bool mu__boolexpr801;
bool mu__boolexpr802;
bool mu__boolexpr803;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr803 = FALSE ;
  else {
  mu__boolexpr803 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr803)) mu__boolexpr802 = FALSE ;
  else {
  mu__boolexpr802 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr802)) mu__boolexpr801 = FALSE ;
  else {
  mu__boolexpr801 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr801)) mu__boolexpr800 = FALSE ;
  else {
  mu__boolexpr800 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr800)) mu__boolexpr799 = FALSE ;
  else {
  mu__boolexpr799 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr799)) mu__boolexpr798 = FALSE ;
  else {
  mu__boolexpr798 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr798)) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = ((mu_rem_time_today[mu_a][mu_day2]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr804;
bool mu__boolexpr805;
bool mu__boolexpr806;
bool mu__boolexpr807;
bool mu__boolexpr808;
bool mu__boolexpr809;
bool mu__boolexpr810;
bool mu__boolexpr811;
bool mu__boolexpr812;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr812 = FALSE ;
  else {
  mu__boolexpr812 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr812)) mu__boolexpr811 = FALSE ;
  else {
  mu__boolexpr811 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr811)) mu__boolexpr810 = FALSE ;
  else {
  mu__boolexpr810 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr810)) mu__boolexpr809 = FALSE ;
  else {
  mu__boolexpr809 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr809)) mu__boolexpr808 = FALSE ;
  else {
  mu__boolexpr808 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr808)) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr807)) mu__boolexpr806 = FALSE ;
  else {
  mu__boolexpr806 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr806)) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = ((mu_rem_time_today[mu_a][mu_day2]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = ((mu_rem_time_today[mu_b][mu_day2]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr813;
bool mu__boolexpr814;
bool mu__boolexpr815;
bool mu__boolexpr816;
bool mu__boolexpr817;
bool mu__boolexpr818;
bool mu__boolexpr819;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr819 = FALSE ;
  else {
  mu__boolexpr819 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr819)) mu__boolexpr818 = FALSE ;
  else {
  mu__boolexpr818 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr818)) mu__boolexpr817 = FALSE ;
  else {
  mu__boolexpr817 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr817)) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr816)) mu__boolexpr815 = FALSE ;
  else {
  mu__boolexpr815 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr815)) mu__boolexpr814 = FALSE ;
  else {
  mu__boolexpr814 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr814)) mu__boolexpr813 = FALSE ;
  else {
  mu__boolexpr813 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr820;
bool mu__boolexpr821;
bool mu__boolexpr822;
bool mu__boolexpr823;
bool mu__boolexpr824;
bool mu__boolexpr825;
bool mu__boolexpr826;
bool mu__boolexpr827;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr827 = FALSE ;
  else {
  mu__boolexpr827 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr827)) mu__boolexpr826 = FALSE ;
  else {
  mu__boolexpr826 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr826)) mu__boolexpr825 = FALSE ;
  else {
  mu__boolexpr825 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr825)) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr824)) mu__boolexpr823 = FALSE ;
  else {
  mu__boolexpr823 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr823)) mu__boolexpr822 = FALSE ;
  else {
  mu__boolexpr822 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr822)) mu__boolexpr821 = FALSE ;
  else {
  mu__boolexpr821 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr821)) mu__boolexpr820 = FALSE ;
  else {
  mu__boolexpr820 = ((mu_rem_time_today[mu_a][mu_day2]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr828;
bool mu__boolexpr829;
bool mu__boolexpr830;
bool mu__boolexpr831;
bool mu__boolexpr832;
bool mu__boolexpr833;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr833 = FALSE ;
  else {
  mu__boolexpr833 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr833)) mu__boolexpr832 = FALSE ;
  else {
  mu__boolexpr832 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr832)) mu__boolexpr831 = FALSE ;
  else {
  mu__boolexpr831 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr831)) mu__boolexpr830 = FALSE ;
  else {
  mu__boolexpr830 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr830)) mu__boolexpr829 = FALSE ;
  else {
  mu__boolexpr829 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr829)) mu__boolexpr828 = FALSE ;
  else {
  mu__boolexpr828 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr834;
bool mu__boolexpr835;
bool mu__boolexpr836;
bool mu__boolexpr837;
bool mu__boolexpr838;
bool mu__boolexpr839;
bool mu__boolexpr840;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr840 = FALSE ;
  else {
  mu__boolexpr840 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr840)) mu__boolexpr839 = FALSE ;
  else {
  mu__boolexpr839 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr839)) mu__boolexpr838 = FALSE ;
  else {
  mu__boolexpr838 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr838)) mu__boolexpr837 = FALSE ;
  else {
  mu__boolexpr837 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr837)) mu__boolexpr836 = FALSE ;
  else {
  mu__boolexpr836 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr836)) mu__boolexpr835 = FALSE ;
  else {
  mu__boolexpr835 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr835)) mu__boolexpr834 = FALSE ;
  else {
  mu__boolexpr834 = ((mu_rem_time_today[mu_b][mu_day1]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr841;
bool mu__boolexpr842;
bool mu__boolexpr843;
bool mu__boolexpr844;
bool mu__boolexpr845;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr845 = FALSE ;
  else {
  mu__boolexpr845 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr845)) mu__boolexpr844 = FALSE ;
  else {
  mu__boolexpr844 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr844)) mu__boolexpr843 = FALSE ;
  else {
  mu__boolexpr843 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr843)) mu__boolexpr842 = FALSE ;
  else {
  mu__boolexpr842 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr842)) mu__boolexpr841 = FALSE ;
  else {
  mu__boolexpr841 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
bool mu__boolexpr846;
bool mu__boolexpr847;
bool mu__boolexpr848;
bool mu__boolexpr849;
bool mu__boolexpr850;
bool mu__boolexpr851;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr851 = FALSE ;
  else {
  mu__boolexpr851 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr851)) mu__boolexpr850 = FALSE ;
  else {
  mu__boolexpr850 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr850)) mu__boolexpr849 = FALSE ;
  else {
  mu__boolexpr849 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr849)) mu__boolexpr848 = FALSE ;
  else {
  mu__boolexpr848 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr848)) mu__boolexpr847 = FALSE ;
  else {
  mu__boolexpr847 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
  if (!(mu__boolexpr847)) mu__boolexpr846 = FALSE ;
  else {
  mu__boolexpr846 = ((mu_rem_time_today[mu_a][mu_day1]) <= (0.000000e+00)) ; 
}
bool mu__boolexpr852;
bool mu__boolexpr853;
bool mu__boolexpr854;
bool mu__boolexpr855;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr855 = FALSE ;
  else {
  mu__boolexpr855 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr855)) mu__boolexpr854 = FALSE ;
  else {
  mu__boolexpr854 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr854)) mu__boolexpr853 = FALSE ;
  else {
  mu__boolexpr853 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr853)) mu__boolexpr852 = FALSE ;
  else {
  mu__boolexpr852 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
bool mu__boolexpr856;
bool mu__boolexpr857;
bool mu__boolexpr858;
bool mu__boolexpr859;
bool mu__boolexpr860;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr860 = FALSE ;
  else {
  mu__boolexpr860 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr860)) mu__boolexpr859 = FALSE ;
  else {
  mu__boolexpr859 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr859)) mu__boolexpr858 = FALSE ;
  else {
  mu__boolexpr858 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr858)) mu__boolexpr857 = FALSE ;
  else {
  mu__boolexpr857 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
  if (!(mu__boolexpr857)) mu__boolexpr856 = FALSE ;
  else {
  mu__boolexpr856 = (mu_already_completed[mu_work][mu_b][mu_day2]) ; 
}
bool mu__boolexpr861;
bool mu__boolexpr862;
bool mu__boolexpr863;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr863 = FALSE ;
  else {
  mu__boolexpr863 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr863)) mu__boolexpr862 = FALSE ;
  else {
  mu__boolexpr862 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr862)) mu__boolexpr861 = FALSE ;
  else {
  mu__boolexpr861 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
bool mu__boolexpr864;
bool mu__boolexpr865;
bool mu__boolexpr866;
bool mu__boolexpr867;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr867 = FALSE ;
  else {
  mu__boolexpr867 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr867)) mu__boolexpr866 = FALSE ;
  else {
  mu__boolexpr866 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr866)) mu__boolexpr865 = FALSE ;
  else {
  mu__boolexpr865 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
  if (!(mu__boolexpr865)) mu__boolexpr864 = FALSE ;
  else {
  mu__boolexpr864 = (mu_already_completed[mu_work][mu_b][mu_day1]) ; 
}
bool mu__boolexpr868;
bool mu__boolexpr869;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr869 = FALSE ;
  else {
  mu__boolexpr869 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr869)) mu__boolexpr868 = FALSE ;
  else {
  mu__boolexpr868 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
bool mu__boolexpr870;
bool mu__boolexpr871;
bool mu__boolexpr872;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr872 = FALSE ;
  else {
  mu__boolexpr872 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr872)) mu__boolexpr871 = FALSE ;
  else {
  mu__boolexpr871 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
  if (!(mu__boolexpr871)) mu__boolexpr870 = FALSE ;
  else {
  mu__boolexpr870 = (mu_already_completed[mu_work][mu_a][mu_day2]) ; 
}
bool mu__boolexpr873;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr873 = FALSE ;
  else {
  mu__boolexpr873 = (mu_complete_day[mu_day2]) ; 
}
bool mu__boolexpr874;
bool mu__boolexpr875;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr875 = FALSE ;
  else {
  mu__boolexpr875 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr875)) mu__boolexpr874 = FALSE ;
  else {
  mu__boolexpr874 = (mu_already_completed[mu_work][mu_a][mu_day1]) ; 
}
bool mu__boolexpr876;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr876 = FALSE ;
  else {
  mu__boolexpr876 = (mu_complete_day[mu_day2]) ; 
}

 if (std::string(typeid(mu_already_completed[mu_work][mu_a][mu_day1]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_already_completed[mu_work][mu_a][mu_day1])); 
 if (std::string(typeid(mu_already_completed[mu_work][mu_a][mu_day2]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_already_completed[mu_work][mu_a][mu_day2])); 
 if (std::string(typeid(mu_already_completed[mu_work][mu_b][mu_day1]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_already_completed[mu_work][mu_b][mu_day1])); 
 if (std::string(typeid(mu_already_completed[mu_work][mu_b][mu_day2]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_already_completed[mu_work][mu_b][mu_day2])); 
 if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_complete_day[mu_day1])); 
 if (std::string(typeid(mu_complete_day[mu_day2]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_complete_day[mu_day2])); 

    return bool_goal_conds;
  }

  std::map<mu__real*, std::pair<double, int> > get_numeric_goal_conditions()
  {
    std::map<mu__real*, std::pair<double, int> > numeric_goal_conds;
 if (std::string(typeid(mu_rem_time_today[mu_a][mu_day1]).name()).compare("14mu_1_real_type") == 0)
		numeric_goal_conds.insert(std::make_pair(&(mu_rem_time_today[mu_a][mu_day1]), std::make_pair(0.000000e+00, 2))); 
 if (std::string(typeid(mu_rem_time_today[mu_a][mu_day2]).name()).compare("14mu_1_real_type") == 0)
		numeric_goal_conds.insert(std::make_pair(&(mu_rem_time_today[mu_a][mu_day2]), std::make_pair(0.000000e+00, 2))); 
 if (std::string(typeid(mu_rem_time_today[mu_b][mu_day1]).name()).compare("14mu_1_real_type") == 0)
		numeric_goal_conds.insert(std::make_pair(&(mu_rem_time_today[mu_b][mu_day1]), std::make_pair(0.000000e+00, 2))); 
 if (std::string(typeid(mu_rem_time_today[mu_b][mu_day2]).name()).compare("14mu_1_real_type") == 0)
		numeric_goal_conds.insert(std::make_pair(&(mu_rem_time_today[mu_b][mu_day2]), std::make_pair(0.000000e+00, 2))); 

    return numeric_goal_conds;
  }

bool mu__condition_877() // Condition for Rule "enjoy"
{
  return mu__goal_766( );
}

bool mu__goal__00(){ return mu__condition_877(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_877, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_878() // Invariant "todo bien"
{
bool mu__boolexpr879;
  if (!(mu_all_event_true)) mu__boolexpr879 = FALSE ;
  else {
  mu__boolexpr879 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr879;
};

bool mu__condition_880() // Condition for Rule "todo bien"
{
  return mu__invariant_878( );
}

bool mu__goal__01(){ return mu__condition_880(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_880, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
schedule_in_progress:NoScalarset
day_in_progress:NoScalarset
activity_in_progress:NoScalarset
complete_day:NoScalarset
start_day:NoScalarset
busy_crewmember:NoScalarset
blocked_location:NoScalarset
paused_activity:NoScalarset
can_perform_activity:NoScalarset
in_order:NoScalarset
active_activity_clock:NoScalarset
active_activity_clock_started:NoScalarset
active_day_clock:NoScalarset
total_time_for_activity_per_person:NoScalarset
time_spent_today:NoScalarset
rem_time_today:NoScalarset
TIME:NoScalarset
g_n:NoScalarset
all_event_true:NoScalarset
h_n:NoScalarset
f_n:NoScalarset
rem_time_for_activity:NoScalarset
total_time_for_activity:NoScalarset
active_day_clock_started:NoScalarset
can_perform_activity_all:NoScalarset
can_start_activity:NoScalarset
performing_activity:NoScalarset
can_pause:NoScalarset
create_schedule_for_member:NoScalarset
already_completed:NoScalarset
planner_in_progress:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { unsigned long ret=0; for (unsigned long i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_schedule_in_progress.MultisetSort();
        mu_day_in_progress.MultisetSort();
        mu_activity_in_progress.MultisetSort();
        mu_complete_day.MultisetSort();
        mu_start_day.MultisetSort();
        mu_busy_crewmember.MultisetSort();
        mu_blocked_location.MultisetSort();
        mu_paused_activity.MultisetSort();
        mu_can_perform_activity.MultisetSort();
        mu_in_order.MultisetSort();
        mu_active_activity_clock.MultisetSort();
        mu_active_activity_clock_started.MultisetSort();
        mu_active_day_clock.MultisetSort();
        mu_total_time_for_activity_per_person.MultisetSort();
        mu_time_spent_today.MultisetSort();
        mu_rem_time_today.MultisetSort();
        mu_TIME.MultisetSort();
        mu_g_n.MultisetSort();
        mu_all_event_true.MultisetSort();
        mu_h_n.MultisetSort();
        mu_f_n.MultisetSort();
        mu_rem_time_for_activity.MultisetSort();
        mu_total_time_for_activity.MultisetSort();
        mu_active_day_clock_started.MultisetSort();
        mu_can_perform_activity_all.MultisetSort();
        mu_can_start_activity.MultisetSort();
        mu_performing_activity.MultisetSort();
        mu_can_pause.MultisetSort();
        mu_create_schedule_for_member.MultisetSort();
        mu_already_completed.MultisetSort();
        mu_planner_in_progress.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_real_type::Permute(PermSet& Perm, int i) {};
void mu_1_real_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_real_type::Canonicalize(PermSet& Perm) {};
void mu_1_real_type::SimpleLimit(PermSet& Perm) {};
void mu_1_real_type::ArrayLimit(PermSet& Perm) {};
void mu_1_real_type::Limit(PermSet& Perm) {};
void mu_1_real_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for real type.\n"); };
void mu_1_integer::Permute(PermSet& Perm, int i) {};
void mu_1_integer::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_integer::Canonicalize(PermSet& Perm) {};
void mu_1_integer::SimpleLimit(PermSet& Perm) {};
void mu_1_integer::ArrayLimit(PermSet& Perm) {};
void mu_1_integer::Limit(PermSet& Perm) {};
void mu_1_integer::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_TIME_type::Permute(PermSet& Perm, int i) {};
void mu_1_TIME_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TIME_type::Canonicalize(PermSet& Perm) {};
void mu_1_TIME_type::SimpleLimit(PermSet& Perm) {};
void mu_1_TIME_type::ArrayLimit(PermSet& Perm) {};
void mu_1_TIME_type::Limit(PermSet& Perm) {};
void mu_1_TIME_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for real type.\n"); };
void mu_1_crew_members::Permute(PermSet& Perm, int i) {};
void mu_1_crew_members::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_crew_members::Canonicalize(PermSet& Perm) {};
void mu_1_crew_members::SimpleLimit(PermSet& Perm) {};
void mu_1_crew_members::ArrayLimit(PermSet& Perm) {};
void mu_1_crew_members::Limit(PermSet& Perm) {};
void mu_1_crew_members::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_activity::Permute(PermSet& Perm, int i) {};
void mu_1_activity::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_activity::Canonicalize(PermSet& Perm) {};
void mu_1_activity::SimpleLimit(PermSet& Perm) {};
void mu_1_activity::ArrayLimit(PermSet& Perm) {};
void mu_1_activity::Limit(PermSet& Perm) {};
void mu_1_activity::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_location::Permute(PermSet& Perm, int i) {};
void mu_1_location::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_location::Canonicalize(PermSet& Perm) {};
void mu_1_location::SimpleLimit(PermSet& Perm) {};
void mu_1_location::ArrayLimit(PermSet& Perm) {};
void mu_1_location::Limit(PermSet& Perm) {};
void mu_1_location::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_days::Permute(PermSet& Perm, int i) {};
void mu_1_days::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_days::Canonicalize(PermSet& Perm) {};
void mu_1_days::SimpleLimit(PermSet& Perm) {};
void mu_1_days::ArrayLimit(PermSet& Perm) {};
void mu_1_days::Limit(PermSet& Perm) {};
void mu_1_days::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm){}
void mu_1__type_12::ArrayLimit(PermSet& Perm) {}
void mu_1__type_12::Limit(PermSet& Perm){}
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_13::Permute(PermSet& Perm, int i)
{
  static mu_1__type_13 temp("Permute_mu_1__type_13",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm){}
void mu_1__type_13::ArrayLimit(PermSet& Perm) {}
void mu_1__type_13::Limit(PermSet& Perm){}
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_14::Permute(PermSet& Perm, int i)
{
  static mu_1__type_14 temp("Permute_mu_1__type_14",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_14::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_14::Canonicalize(PermSet& Perm){};
void mu_1__type_14::SimpleLimit(PermSet& Perm){}
void mu_1__type_14::ArrayLimit(PermSet& Perm) {}
void mu_1__type_14::Limit(PermSet& Perm){}
void mu_1__type_14::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_15::Permute(PermSet& Perm, int i)
{
  static mu_1__type_15 temp("Permute_mu_1__type_15",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_15::Canonicalize(PermSet& Perm){};
void mu_1__type_15::SimpleLimit(PermSet& Perm){}
void mu_1__type_15::ArrayLimit(PermSet& Perm) {}
void mu_1__type_15::Limit(PermSet& Perm){}
void mu_1__type_15::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_16::Permute(PermSet& Perm, int i)
{
  static mu_1__type_16 temp("Permute_mu_1__type_16",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_16::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_16::Canonicalize(PermSet& Perm){};
void mu_1__type_16::SimpleLimit(PermSet& Perm){}
void mu_1__type_16::ArrayLimit(PermSet& Perm) {}
void mu_1__type_16::Limit(PermSet& Perm){}
void mu_1__type_16::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_17::Permute(PermSet& Perm, int i)
{
  static mu_1__type_17 temp("Permute_mu_1__type_17",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_17::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_17::Canonicalize(PermSet& Perm){};
void mu_1__type_17::SimpleLimit(PermSet& Perm){}
void mu_1__type_17::ArrayLimit(PermSet& Perm) {}
void mu_1__type_17::Limit(PermSet& Perm){}
void mu_1__type_17::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_18::Permute(PermSet& Perm, int i)
{
  static mu_1__type_18 temp("Permute_mu_1__type_18",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_18::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_18::Canonicalize(PermSet& Perm){};
void mu_1__type_18::SimpleLimit(PermSet& Perm){}
void mu_1__type_18::ArrayLimit(PermSet& Perm) {}
void mu_1__type_18::Limit(PermSet& Perm){}
void mu_1__type_18::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_19::Permute(PermSet& Perm, int i)
{
  static mu_1__type_19 temp("Permute_mu_1__type_19",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_19::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_19::Canonicalize(PermSet& Perm){};
void mu_1__type_19::SimpleLimit(PermSet& Perm){}
void mu_1__type_19::ArrayLimit(PermSet& Perm) {}
void mu_1__type_19::Limit(PermSet& Perm){}
void mu_1__type_19::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_20::Permute(PermSet& Perm, int i)
{
  static mu_1__type_20 temp("Permute_mu_1__type_20",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_20::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_20::Canonicalize(PermSet& Perm){};
void mu_1__type_20::SimpleLimit(PermSet& Perm){}
void mu_1__type_20::ArrayLimit(PermSet& Perm) {}
void mu_1__type_20::Limit(PermSet& Perm){}
void mu_1__type_20::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_21::Permute(PermSet& Perm, int i)
{
  static mu_1__type_21 temp("Permute_mu_1__type_21",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_21::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_21::Canonicalize(PermSet& Perm){};
void mu_1__type_21::SimpleLimit(PermSet& Perm){}
void mu_1__type_21::ArrayLimit(PermSet& Perm) {}
void mu_1__type_21::Limit(PermSet& Perm){}
void mu_1__type_21::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_22::Permute(PermSet& Perm, int i)
{
  static mu_1__type_22 temp("Permute_mu_1__type_22",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_22::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_22::Canonicalize(PermSet& Perm){};
void mu_1__type_22::SimpleLimit(PermSet& Perm){}
void mu_1__type_22::ArrayLimit(PermSet& Perm) {}
void mu_1__type_22::Limit(PermSet& Perm){}
void mu_1__type_22::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_23::Permute(PermSet& Perm, int i)
{
  static mu_1__type_23 temp("Permute_mu_1__type_23",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_23::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_23::Canonicalize(PermSet& Perm){};
void mu_1__type_23::SimpleLimit(PermSet& Perm){}
void mu_1__type_23::ArrayLimit(PermSet& Perm) {}
void mu_1__type_23::Limit(PermSet& Perm){}
void mu_1__type_23::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_24::Permute(PermSet& Perm, int i)
{
  static mu_1__type_24 temp("Permute_mu_1__type_24",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_24::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_24::Canonicalize(PermSet& Perm){};
void mu_1__type_24::SimpleLimit(PermSet& Perm){}
void mu_1__type_24::ArrayLimit(PermSet& Perm) {}
void mu_1__type_24::Limit(PermSet& Perm){}
void mu_1__type_24::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_25::Permute(PermSet& Perm, int i)
{
  static mu_1__type_25 temp("Permute_mu_1__type_25",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_25::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_25::Canonicalize(PermSet& Perm){};
void mu_1__type_25::SimpleLimit(PermSet& Perm){}
void mu_1__type_25::ArrayLimit(PermSet& Perm) {}
void mu_1__type_25::Limit(PermSet& Perm){}
void mu_1__type_25::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_26::Permute(PermSet& Perm, int i)
{
  static mu_1__type_26 temp("Permute_mu_1__type_26",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_26::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_26::Canonicalize(PermSet& Perm){};
void mu_1__type_26::SimpleLimit(PermSet& Perm){}
void mu_1__type_26::ArrayLimit(PermSet& Perm) {}
void mu_1__type_26::Limit(PermSet& Perm){}
void mu_1__type_26::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_27::Permute(PermSet& Perm, int i)
{
  static mu_1__type_27 temp("Permute_mu_1__type_27",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_27::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_27::Canonicalize(PermSet& Perm){};
void mu_1__type_27::SimpleLimit(PermSet& Perm){}
void mu_1__type_27::ArrayLimit(PermSet& Perm) {}
void mu_1__type_27::Limit(PermSet& Perm){}
void mu_1__type_27::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_28::Permute(PermSet& Perm, int i)
{
  static mu_1__type_28 temp("Permute_mu_1__type_28",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_28::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_28::Canonicalize(PermSet& Perm){};
void mu_1__type_28::SimpleLimit(PermSet& Perm){}
void mu_1__type_28::ArrayLimit(PermSet& Perm) {}
void mu_1__type_28::Limit(PermSet& Perm){}
void mu_1__type_28::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_29::Permute(PermSet& Perm, int i)
{
  static mu_1__type_29 temp("Permute_mu_1__type_29",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_29::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_29::Canonicalize(PermSet& Perm){};
void mu_1__type_29::SimpleLimit(PermSet& Perm){}
void mu_1__type_29::ArrayLimit(PermSet& Perm) {}
void mu_1__type_29::Limit(PermSet& Perm){}
void mu_1__type_29::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_30::Permute(PermSet& Perm, int i)
{
  static mu_1__type_30 temp("Permute_mu_1__type_30",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_30::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_30::Canonicalize(PermSet& Perm){};
void mu_1__type_30::SimpleLimit(PermSet& Perm){}
void mu_1__type_30::ArrayLimit(PermSet& Perm) {}
void mu_1__type_30::Limit(PermSet& Perm){}
void mu_1__type_30::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_31::Permute(PermSet& Perm, int i)
{
  static mu_1__type_31 temp("Permute_mu_1__type_31",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_31::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_31::Canonicalize(PermSet& Perm){};
void mu_1__type_31::SimpleLimit(PermSet& Perm){}
void mu_1__type_31::ArrayLimit(PermSet& Perm) {}
void mu_1__type_31::Limit(PermSet& Perm){}
void mu_1__type_31::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_32::Permute(PermSet& Perm, int i)
{
  static mu_1__type_32 temp("Permute_mu_1__type_32",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_32::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_32::Canonicalize(PermSet& Perm){};
void mu_1__type_32::SimpleLimit(PermSet& Perm){}
void mu_1__type_32::ArrayLimit(PermSet& Perm) {}
void mu_1__type_32::Limit(PermSet& Perm){}
void mu_1__type_32::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_33::Permute(PermSet& Perm, int i)
{
  static mu_1__type_33 temp("Permute_mu_1__type_33",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_33::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_33::Canonicalize(PermSet& Perm){};
void mu_1__type_33::SimpleLimit(PermSet& Perm){}
void mu_1__type_33::ArrayLimit(PermSet& Perm) {}
void mu_1__type_33::Limit(PermSet& Perm){}
void mu_1__type_33::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_34::Permute(PermSet& Perm, int i)
{
  static mu_1__type_34 temp("Permute_mu_1__type_34",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_34::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_34::Canonicalize(PermSet& Perm){};
void mu_1__type_34::SimpleLimit(PermSet& Perm){}
void mu_1__type_34::ArrayLimit(PermSet& Perm) {}
void mu_1__type_34::Limit(PermSet& Perm){}
void mu_1__type_34::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_35::Permute(PermSet& Perm, int i)
{
  static mu_1__type_35 temp("Permute_mu_1__type_35",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_35::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_35::Canonicalize(PermSet& Perm){};
void mu_1__type_35::SimpleLimit(PermSet& Perm){}
void mu_1__type_35::ArrayLimit(PermSet& Perm) {}
void mu_1__type_35::Limit(PermSet& Perm){}
void mu_1__type_35::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_36::Permute(PermSet& Perm, int i)
{
  static mu_1__type_36 temp("Permute_mu_1__type_36",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_36::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_36::Canonicalize(PermSet& Perm){};
void mu_1__type_36::SimpleLimit(PermSet& Perm){}
void mu_1__type_36::ArrayLimit(PermSet& Perm) {}
void mu_1__type_36::Limit(PermSet& Perm){}
void mu_1__type_36::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_37::Permute(PermSet& Perm, int i)
{
  static mu_1__type_37 temp("Permute_mu_1__type_37",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_37::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_37::Canonicalize(PermSet& Perm){};
void mu_1__type_37::SimpleLimit(PermSet& Perm){}
void mu_1__type_37::ArrayLimit(PermSet& Perm) {}
void mu_1__type_37::Limit(PermSet& Perm){}
void mu_1__type_37::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_38::Permute(PermSet& Perm, int i)
{
  static mu_1__type_38 temp("Permute_mu_1__type_38",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_38::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_38::Canonicalize(PermSet& Perm){};
void mu_1__type_38::SimpleLimit(PermSet& Perm){}
void mu_1__type_38::ArrayLimit(PermSet& Perm) {}
void mu_1__type_38::Limit(PermSet& Perm){}
void mu_1__type_38::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_39::Permute(PermSet& Perm, int i)
{
  static mu_1__type_39 temp("Permute_mu_1__type_39",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_39::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_39::Canonicalize(PermSet& Perm){};
void mu_1__type_39::SimpleLimit(PermSet& Perm){}
void mu_1__type_39::ArrayLimit(PermSet& Perm) {}
void mu_1__type_39::Limit(PermSet& Perm){}
void mu_1__type_39::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_40::Permute(PermSet& Perm, int i)
{
  static mu_1__type_40 temp("Permute_mu_1__type_40",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_40::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_40::Canonicalize(PermSet& Perm){};
void mu_1__type_40::SimpleLimit(PermSet& Perm){}
void mu_1__type_40::ArrayLimit(PermSet& Perm) {}
void mu_1__type_40::Limit(PermSet& Perm){}
void mu_1__type_40::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_41::Permute(PermSet& Perm, int i)
{
  static mu_1__type_41 temp("Permute_mu_1__type_41",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_41::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_41::Canonicalize(PermSet& Perm){};
void mu_1__type_41::SimpleLimit(PermSet& Perm){}
void mu_1__type_41::ArrayLimit(PermSet& Perm) {}
void mu_1__type_41::Limit(PermSet& Perm){}
void mu_1__type_41::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_42::Permute(PermSet& Perm, int i)
{
  static mu_1__type_42 temp("Permute_mu_1__type_42",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_42::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_42::Canonicalize(PermSet& Perm){};
void mu_1__type_42::SimpleLimit(PermSet& Perm){}
void mu_1__type_42::ArrayLimit(PermSet& Perm) {}
void mu_1__type_42::Limit(PermSet& Perm){}
void mu_1__type_42::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_43::Permute(PermSet& Perm, int i)
{
  static mu_1__type_43 temp("Permute_mu_1__type_43",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_43::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_43::Canonicalize(PermSet& Perm){};
void mu_1__type_43::SimpleLimit(PermSet& Perm){}
void mu_1__type_43::ArrayLimit(PermSet& Perm) {}
void mu_1__type_43::Limit(PermSet& Perm){}
void mu_1__type_43::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_44::Permute(PermSet& Perm, int i)
{
  static mu_1__type_44 temp("Permute_mu_1__type_44",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_44::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_44::Canonicalize(PermSet& Perm){};
void mu_1__type_44::SimpleLimit(PermSet& Perm){}
void mu_1__type_44::ArrayLimit(PermSet& Perm) {}
void mu_1__type_44::Limit(PermSet& Perm){}
void mu_1__type_44::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_45::Permute(PermSet& Perm, int i)
{
  static mu_1__type_45 temp("Permute_mu_1__type_45",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_45::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_45::Canonicalize(PermSet& Perm){};
void mu_1__type_45::SimpleLimit(PermSet& Perm){}
void mu_1__type_45::ArrayLimit(PermSet& Perm) {}
void mu_1__type_45::Limit(PermSet& Perm){}
void mu_1__type_45::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_46::Permute(PermSet& Perm, int i)
{
  static mu_1__type_46 temp("Permute_mu_1__type_46",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_46::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_46::Canonicalize(PermSet& Perm){};
void mu_1__type_46::SimpleLimit(PermSet& Perm){}
void mu_1__type_46::ArrayLimit(PermSet& Perm) {}
void mu_1__type_46::Limit(PermSet& Perm){}
void mu_1__type_46::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_47::Permute(PermSet& Perm, int i)
{
  static mu_1__type_47 temp("Permute_mu_1__type_47",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_47::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_47::Canonicalize(PermSet& Perm){};
void mu_1__type_47::SimpleLimit(PermSet& Perm){}
void mu_1__type_47::ArrayLimit(PermSet& Perm) {}
void mu_1__type_47::Limit(PermSet& Perm){}
void mu_1__type_47::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_48::Permute(PermSet& Perm, int i)
{
  static mu_1__type_48 temp("Permute_mu_1__type_48",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_48::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_48::Canonicalize(PermSet& Perm){};
void mu_1__type_48::SimpleLimit(PermSet& Perm){}
void mu_1__type_48::ArrayLimit(PermSet& Perm) {}
void mu_1__type_48::Limit(PermSet& Perm){}
void mu_1__type_48::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_49::Permute(PermSet& Perm, int i)
{
  static mu_1__type_49 temp("Permute_mu_1__type_49",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_49::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_49::Canonicalize(PermSet& Perm){};
void mu_1__type_49::SimpleLimit(PermSet& Perm){}
void mu_1__type_49::ArrayLimit(PermSet& Perm) {}
void mu_1__type_49::Limit(PermSet& Perm){}
void mu_1__type_49::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_50::Permute(PermSet& Perm, int i)
{
  static mu_1__type_50 temp("Permute_mu_1__type_50",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_50::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_50::Canonicalize(PermSet& Perm){};
void mu_1__type_50::SimpleLimit(PermSet& Perm){}
void mu_1__type_50::ArrayLimit(PermSet& Perm) {}
void mu_1__type_50::Limit(PermSet& Perm){}
void mu_1__type_50::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_51::Permute(PermSet& Perm, int i)
{
  static mu_1__type_51 temp("Permute_mu_1__type_51",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_51::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_51::Canonicalize(PermSet& Perm){};
void mu_1__type_51::SimpleLimit(PermSet& Perm){}
void mu_1__type_51::ArrayLimit(PermSet& Perm) {}
void mu_1__type_51::Limit(PermSet& Perm){}
void mu_1__type_51::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_52::Permute(PermSet& Perm, int i)
{
  static mu_1__type_52 temp("Permute_mu_1__type_52",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_52::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_52::Canonicalize(PermSet& Perm){};
void mu_1__type_52::SimpleLimit(PermSet& Perm){}
void mu_1__type_52::ArrayLimit(PermSet& Perm) {}
void mu_1__type_52::Limit(PermSet& Perm){}
void mu_1__type_52::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_53::Permute(PermSet& Perm, int i)
{
  static mu_1__type_53 temp("Permute_mu_1__type_53",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_53::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_53::Canonicalize(PermSet& Perm){};
void mu_1__type_53::SimpleLimit(PermSet& Perm){}
void mu_1__type_53::ArrayLimit(PermSet& Perm) {}
void mu_1__type_53::Limit(PermSet& Perm){}
void mu_1__type_53::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_54::Permute(PermSet& Perm, int i)
{
  static mu_1__type_54 temp("Permute_mu_1__type_54",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_54::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_54::Canonicalize(PermSet& Perm){};
void mu_1__type_54::SimpleLimit(PermSet& Perm){}
void mu_1__type_54::ArrayLimit(PermSet& Perm) {}
void mu_1__type_54::Limit(PermSet& Perm){}
void mu_1__type_54::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_55::Permute(PermSet& Perm, int i)
{
  static mu_1__type_55 temp("Permute_mu_1__type_55",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_55::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_55::Canonicalize(PermSet& Perm){};
void mu_1__type_55::SimpleLimit(PermSet& Perm){}
void mu_1__type_55::ArrayLimit(PermSet& Perm) {}
void mu_1__type_55::Limit(PermSet& Perm){}
void mu_1__type_55::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_56::Permute(PermSet& Perm, int i)
{
  static mu_1__type_56 temp("Permute_mu_1__type_56",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_56::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_56::Canonicalize(PermSet& Perm){};
void mu_1__type_56::SimpleLimit(PermSet& Perm){}
void mu_1__type_56::ArrayLimit(PermSet& Perm) {}
void mu_1__type_56::Limit(PermSet& Perm){}
void mu_1__type_56::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_57::Permute(PermSet& Perm, int i)
{
  static mu_1__type_57 temp("Permute_mu_1__type_57",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_57::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_57::Canonicalize(PermSet& Perm){};
void mu_1__type_57::SimpleLimit(PermSet& Perm){}
void mu_1__type_57::ArrayLimit(PermSet& Perm) {}
void mu_1__type_57::Limit(PermSet& Perm){}
void mu_1__type_57::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_58::Permute(PermSet& Perm, int i)
{
  static mu_1__type_58 temp("Permute_mu_1__type_58",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_58::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_58::Canonicalize(PermSet& Perm){};
void mu_1__type_58::SimpleLimit(PermSet& Perm){}
void mu_1__type_58::ArrayLimit(PermSet& Perm) {}
void mu_1__type_58::Limit(PermSet& Perm){}
void mu_1__type_58::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  unsigned int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_schedule_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_schedule_in_progress.MultisetSort();
              mu_day_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_day_in_progress.MultisetSort();
              mu_activity_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_activity_in_progress.MultisetSort();
              mu_complete_day.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_complete_day.MultisetSort();
              mu_start_day.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_start_day.MultisetSort();
              mu_busy_crewmember.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_busy_crewmember.MultisetSort();
              mu_blocked_location.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_blocked_location.MultisetSort();
              mu_paused_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_paused_activity.MultisetSort();
              mu_can_perform_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_perform_activity.MultisetSort();
              mu_in_order.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_in_order.MultisetSort();
              mu_active_activity_clock.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_active_activity_clock.MultisetSort();
              mu_active_activity_clock_started.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_active_activity_clock_started.MultisetSort();
              mu_active_day_clock.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_active_day_clock.MultisetSort();
              mu_total_time_for_activity_per_person.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity_per_person.MultisetSort();
              mu_time_spent_today.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_time_spent_today.MultisetSort();
              mu_rem_time_today.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_rem_time_today.MultisetSort();
              mu_TIME.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_TIME.MultisetSort();
              mu_g_n.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_g_n.MultisetSort();
              mu_all_event_true.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_all_event_true.MultisetSort();
              mu_h_n.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_h_n.MultisetSort();
              mu_f_n.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_f_n.MultisetSort();
              mu_rem_time_for_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_rem_time_for_activity.MultisetSort();
              mu_total_time_for_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity.MultisetSort();
              mu_active_day_clock_started.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_active_day_clock_started.MultisetSort();
              mu_can_perform_activity_all.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_perform_activity_all.MultisetSort();
              mu_can_start_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_start_activity.MultisetSort();
              mu_performing_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_performing_activity.MultisetSort();
              mu_can_pause.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_pause.MultisetSort();
              mu_create_schedule_for_member.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_create_schedule_for_member.MultisetSort();
              mu_already_completed.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_already_completed.MultisetSort();
              mu_planner_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_planner_in_progress.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_schedule_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_schedule_in_progress.MultisetSort();
          mu_day_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_day_in_progress.MultisetSort();
          mu_activity_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_activity_in_progress.MultisetSort();
          mu_complete_day.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_complete_day.MultisetSort();
          mu_start_day.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_start_day.MultisetSort();
          mu_busy_crewmember.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_busy_crewmember.MultisetSort();
          mu_blocked_location.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_blocked_location.MultisetSort();
          mu_paused_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_paused_activity.MultisetSort();
          mu_can_perform_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_perform_activity.MultisetSort();
          mu_in_order.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_in_order.MultisetSort();
          mu_active_activity_clock.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_active_activity_clock.MultisetSort();
          mu_active_activity_clock_started.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_active_activity_clock_started.MultisetSort();
          mu_active_day_clock.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_active_day_clock.MultisetSort();
          mu_total_time_for_activity_per_person.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_total_time_for_activity_per_person.MultisetSort();
          mu_time_spent_today.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_time_spent_today.MultisetSort();
          mu_rem_time_today.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_rem_time_today.MultisetSort();
          mu_TIME.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_TIME.MultisetSort();
          mu_g_n.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_g_n.MultisetSort();
          mu_all_event_true.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_all_event_true.MultisetSort();
          mu_h_n.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_h_n.MultisetSort();
          mu_f_n.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_f_n.MultisetSort();
          mu_rem_time_for_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_rem_time_for_activity.MultisetSort();
          mu_total_time_for_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_total_time_for_activity.MultisetSort();
          mu_active_day_clock_started.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_active_day_clock_started.MultisetSort();
          mu_can_perform_activity_all.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_perform_activity_all.MultisetSort();
          mu_can_start_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_start_activity.MultisetSort();
          mu_performing_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_performing_activity.MultisetSort();
          mu_can_pause.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_pause.MultisetSort();
          mu_create_schedule_for_member.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_create_schedule_for_member.MultisetSort();
          mu_already_completed.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_already_completed.MultisetSort();
          mu_planner_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_planner_in_progress.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_schedule_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_schedule_in_progress.MultisetSort();
              mu_day_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_day_in_progress.MultisetSort();
              mu_activity_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_activity_in_progress.MultisetSort();
              mu_complete_day.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_complete_day.MultisetSort();
              mu_start_day.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_start_day.MultisetSort();
              mu_busy_crewmember.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_busy_crewmember.MultisetSort();
              mu_blocked_location.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_blocked_location.MultisetSort();
              mu_paused_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_paused_activity.MultisetSort();
              mu_can_perform_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_perform_activity.MultisetSort();
              mu_in_order.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_in_order.MultisetSort();
              mu_active_activity_clock.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_active_activity_clock.MultisetSort();
              mu_active_activity_clock_started.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_active_activity_clock_started.MultisetSort();
              mu_active_day_clock.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_active_day_clock.MultisetSort();
              mu_total_time_for_activity_per_person.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity_per_person.MultisetSort();
              mu_time_spent_today.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_time_spent_today.MultisetSort();
              mu_rem_time_today.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_rem_time_today.MultisetSort();
              mu_TIME.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_TIME.MultisetSort();
              mu_g_n.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_g_n.MultisetSort();
              mu_all_event_true.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_all_event_true.MultisetSort();
              mu_h_n.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_h_n.MultisetSort();
              mu_f_n.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_f_n.MultisetSort();
              mu_rem_time_for_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_rem_time_for_activity.MultisetSort();
              mu_total_time_for_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity.MultisetSort();
              mu_active_day_clock_started.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_active_day_clock_started.MultisetSort();
              mu_can_perform_activity_all.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_perform_activity_all.MultisetSort();
              mu_can_start_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_start_activity.MultisetSort();
              mu_performing_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_performing_activity.MultisetSort();
              mu_can_pause.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_pause.MultisetSort();
              mu_create_schedule_for_member.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_create_schedule_for_member.MultisetSort();
              mu_already_completed.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_already_completed.MultisetSort();
              mu_planner_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_planner_in_progress.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_schedule_in_progress.MultisetSort();
      mu_day_in_progress.MultisetSort();
      mu_activity_in_progress.MultisetSort();
      mu_complete_day.MultisetSort();
      mu_start_day.MultisetSort();
      mu_busy_crewmember.MultisetSort();
      mu_blocked_location.MultisetSort();
      mu_paused_activity.MultisetSort();
      mu_can_perform_activity.MultisetSort();
      mu_in_order.MultisetSort();
      mu_active_activity_clock.MultisetSort();
      mu_active_activity_clock_started.MultisetSort();
      mu_active_day_clock.MultisetSort();
      mu_total_time_for_activity_per_person.MultisetSort();
      mu_time_spent_today.MultisetSort();
      mu_rem_time_today.MultisetSort();
      mu_TIME.MultisetSort();
      mu_g_n.MultisetSort();
      mu_all_event_true.MultisetSort();
      mu_h_n.MultisetSort();
      mu_f_n.MultisetSort();
      mu_rem_time_for_activity.MultisetSort();
      mu_total_time_for_activity.MultisetSort();
      mu_active_day_clock_started.MultisetSort();
      mu_can_perform_activity_all.MultisetSort();
      mu_can_start_activity.MultisetSort();
      mu_performing_activity.MultisetSort();
      mu_can_pause.MultisetSort();
      mu_create_schedule_for_member.MultisetSort();
      mu_already_completed.MultisetSort();
      mu_planner_in_progress.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  unsigned int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_schedule_in_progress.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_schedule_in_progress.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_day_in_progress.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_day_in_progress.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_activity_in_progress.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_activity_in_progress.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_complete_day.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_complete_day.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_start_day.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_start_day.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_busy_crewmember.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_busy_crewmember.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_blocked_location.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_blocked_location.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_paused_activity.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_paused_activity.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_can_perform_activity.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_can_perform_activity.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_in_order.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_in_order.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_active_activity_clock.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_active_activity_clock.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_active_activity_clock_started.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_active_activity_clock_started.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_active_day_clock.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_active_day_clock.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_total_time_for_activity_per_person.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_total_time_for_activity_per_person.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_time_spent_today.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_time_spent_today.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_rem_time_today.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_rem_time_today.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_TIME.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_TIME.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_g_n.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_g_n.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_all_event_true.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_all_event_true.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_h_n.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_h_n.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_f_n.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_f_n.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_rem_time_for_activity.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_rem_time_for_activity.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_total_time_for_activity.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_total_time_for_activity.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_active_day_clock_started.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_active_day_clock_started.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_can_perform_activity_all.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_can_perform_activity_all.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_can_start_activity.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_can_start_activity.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_performing_activity.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_performing_activity.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_can_pause.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_can_pause.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_create_schedule_for_member.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_create_schedule_for_member.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_already_completed.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_already_completed.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_planner_in_progress.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_planner_in_progress.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "upm_epilog.hpp"
