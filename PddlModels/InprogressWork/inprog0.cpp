/******************************
  Program "inprog0.m" compiled by "DiNo Release 1.1"

  DiNo Last Compiled date: "May 11 2018"
 ******************************/

/********************
  Parameter
 ********************/
#define DINO_VERSION "DiNo Release 1.1"
#define MURPHI_DATE "May 11 2018"
#define PROTOCOL_NAME "inprog0"
#define DOMAIN_FILENAME "inprog0.pddl"
#define PROBLEM_FILENAME "inproquestg0.pddl"
#define DISCRETIZATION 1.000000
#define VAL_PATHNAME "/home/aditya/DiNo/src/DiNo/../VAL-master/validate"
#define BITS_IN_WORLD 2995
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

  mu_1_crew_members (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_crew_members (void): mu__byte(1, 1, 1) {};
  mu_1_crew_members (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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

const char *mu_1_crew_members::values[] = {"a",NULL };

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
      return ( s << mu_1_activity::values[ int(val) - 2] );
    else return ( s << "Undefined" );
  };

  mu_1_activity (const char *name, int os): mu__byte(2, 8, 3, name, os) {};
  mu_1_activity (void): mu__byte(2, 8, 3) {};
  mu_1_activity (int val): mu__byte(2, 8, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -2]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -2],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_activity::values[] = {"work","exercise","sleep","nothing","breakfast","lunch","dinner",NULL };

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
      return ( s << mu_1_location::values[ int(val) - 9] );
    else return ( s << "Undefined" );
  };

  mu_1_location (const char *name, int os): mu__byte(9, 15, 3, name, os) {};
  mu_1_location (void): mu__byte(9, 15, 3) {};
  mu_1_location (int val): mu__byte(9, 15, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -9]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -9],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_location::values[] = {"loca","locb","locc","locd","loce","locf","locg",NULL };

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
      return ( s << mu_1_days::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_days (const char *name, int os): mu__byte(16, 18, 2, name, os) {};
  mu_1_days (void): mu__byte(16, 18, 2) {};
  mu_1_days (int val): mu__byte(16, 18, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -16]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -16],separator); 
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
  mu_1_real_type array[ 1 ]; 
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
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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
  }
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1/*:public mu_1__type_super*/
{
 public:
  mu_1__type_0 array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 1 ]; 
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
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 1 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_3 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 3 ]; 
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
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5/*:public mu_1__type_super*/
{
 public:
  mu_1__type_4 array[ 7 ]; 
#define awesome_mu_00_mu_1__type_4_mu_1__type_5 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1__type_4& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 3 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_6 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7/*:public mu_1__type_super*/
{
 public:
  mu_1__type_6 array[ 7 ]; 
#define awesome_mu_00_mu_1__type_6_mu_1__type_7 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1__type_6& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 144 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_8 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
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
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
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
  mu_0_boolean array[ 7 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_11 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 7; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12/*:public mu_1__type_super*/
{
 public:
  mu_1__type_11 array[ 1 ]; 
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
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
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
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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
  }
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14/*:public mu_1__type_super*/
{
 public:
  mu_1__type_13 array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 7 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_15 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 9 ) && ( index <= 15 ) )
      return array[ index - 9 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 9 ];
#endif
  };
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
    for (int i = 0; i < 7; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"loca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locb", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locc", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locd", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"loce", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locf", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locg", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16/*:public mu_1__type_super*/
{
 public:
  mu_1__type_15 array[ 1 ]; 
#define awesome_mu_00_mu_1__type_15_mu_1__type_16 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_1__type_15& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_16& a, mu_1__type_16& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17/*:public mu_1__type_super*/
{
 public:
  mu_1__type_16 array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 7 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_18 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_18 (const char *n, int os) { set_self(n, os); };
  mu_1__type_18 ( void ) {};
  virtual ~mu_1__type_18 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 9 ) && ( index <= 15 ) )
      return array[ index - 9 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 9 ];
#endif
  };
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 7; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"loca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locb", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locc", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locd", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"loce", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locf", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locg", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19/*:public mu_1__type_super*/
{
 public:
  mu_1__type_18 array[ 1 ]; 
#define awesome_mu_00_mu_1__type_18_mu_1__type_19 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_19 (const char *n, int os) { set_self(n, os); };
  mu_1__type_19 ( void ) {};
  virtual ~mu_1__type_19 ();
  mu_1__type_18& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
  mu_1__type_19& operator= (const mu_1__type_19& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20/*:public mu_1__type_super*/
{
 public:
  mu_1__type_19 array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1__type_21/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 7 ]; 
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
    if ( ( index >= 9 ) && ( index <= 15 ) )
      return array[ index - 9 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 9 ];
#endif
  };
  mu_1__type_21& operator= (const mu_1__type_21& from)
  {
    for (int i = 0; i < 7; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"loca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locb", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locc", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locd", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"loce", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locf", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"locg", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_21::~mu_1__type_21()
{
}
/*** end array declaration ***/
mu_1__type_21 mu_1__type_21_undefined_var;

class mu_1__type_22/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_22 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_22 (const char *n, int os) { set_self(n, os); };
  mu_1__type_22 ( void ) {};
  virtual ~mu_1__type_22 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
  mu_1__type_22& operator= (const mu_1__type_22& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_22& a, mu_1__type_22& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_22::~mu_1__type_22()
{
}
/*** end array declaration ***/
mu_1__type_22 mu_1__type_22_undefined_var;

class mu_1__type_23/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_23& operator= (const mu_1__type_23& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_23& a, mu_1__type_23& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_23::~mu_1__type_23()
{
}
/*** end array declaration ***/
mu_1__type_23 mu_1__type_23_undefined_var;

class mu_1__type_24/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_24 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_24 (const char *n, int os) { set_self(n, os); };
  mu_1__type_24 ( void ) {};
  virtual ~mu_1__type_24 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_24& operator= (const mu_1__type_24& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_24& a, mu_1__type_24& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_24& a, mu_1__type_24& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_24::~mu_1__type_24()
{
}
/*** end array declaration ***/
mu_1__type_24 mu_1__type_24_undefined_var;

class mu_1__type_25/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_25& operator= (const mu_1__type_25& from)
  {
    for (int i = 0; i < 7; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_25::~mu_1__type_25()
{
}
/*** end array declaration ***/
mu_1__type_25 mu_1__type_25_undefined_var;

class mu_1__type_26/*:public mu_1__type_super*/
{
 public:
  mu_1__type_25 array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_26& operator= (const mu_1__type_26& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 14 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_26::~mu_1__type_26()
{
}
/*** end array declaration ***/
mu_1__type_26 mu_1__type_26_undefined_var;

class mu_1__type_27/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
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
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_27& a, mu_1__type_27& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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
  }
mu_1__type_27::~mu_1__type_27()
{
}
/*** end array declaration ***/
mu_1__type_27 mu_1__type_27_undefined_var;

class mu_1__type_28/*:public mu_1__type_super*/
{
 public:
  mu_1__type_27 array[ 7 ]; 
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
    if ( ( index >= 2 ) && ( index <= 8 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_28& operator= (const mu_1__type_28& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
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
    for (int i = 0; i < 7; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 7; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"lunch", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"dinner", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_28::~mu_1__type_28()
{
}
/*** end array declaration ***/
mu_1__type_28 mu_1__type_28_undefined_var;

class mu_1__type_29/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_29& operator= (const mu_1__type_29& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_29& a, mu_1__type_29& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_29::~mu_1__type_29()
{
}
/*** end array declaration ***/
mu_1__type_29 mu_1__type_29_undefined_var;

class mu_1__type_30/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_30 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_30 (const char *n, int os) { set_self(n, os); };
  mu_1__type_30 ( void ) {};
  virtual ~mu_1__type_30 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
  mu_1__type_30& operator= (const mu_1__type_30& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_30& a, mu_1__type_30& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_30::~mu_1__type_30()
{
}
/*** end array declaration ***/
mu_1__type_30 mu_1__type_30_undefined_var;

class mu_1__type_31/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 16 ) && ( index <= 18 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_31& operator= (const mu_1__type_31& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_31& a, mu_1__type_31& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_31::~mu_1__type_31()
{
}
/*** end array declaration ***/
mu_1__type_31 mu_1__type_31_undefined_var;

class mu_1__type_32/*:public mu_1__type_super*/
{
 public:
  mu_1__type_31 array[ 1 ]; 
#define awesome_mu_00_mu_1__type_31_mu_1__type_32 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_32 (const char *n, int os) { set_self(n, os); };
  mu_1__type_32 ( void ) {};
  virtual ~mu_1__type_32 ();
  mu_1__type_31& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
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
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_32& a, mu_1__type_32& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_32::~mu_1__type_32()
{
}
/*** end array declaration ***/
mu_1__type_32 mu_1__type_32_undefined_var;

const int mu_a = 1;
const int mu_work = 2;
const int mu_exercise = 3;
const int mu_sleep = 4;
const int mu_nothing = 5;
const int mu_breakfast = 6;
const int mu_lunch = 7;
const int mu_dinner = 8;
const int mu_loca = 9;
const int mu_locb = 10;
const int mu_locc = 11;
const int mu_locd = 12;
const int mu_loce = 13;
const int mu_locf = 14;
const int mu_locg = 15;
const int mu_day0 = 16;
const int mu_day1 = 17;
const int mu_day2 = 18;
const double mu_T = +1.000000e+00;
const double mu_number_of_crew_members = +1.000000e+00;
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
mu_1_real_type mu_number_of_crew_members_with_task_complete("number_of_crew_members_with_task_complete",99);

/*** Variable declaration ***/
mu_1__type_1 mu_rem_time_for_activity("rem_time_for_activity",147);

/*** Variable declaration ***/
mu_1__type_2 mu_rem_time_today("rem_time_today",483);

/*** Variable declaration ***/
mu_1__type_3 mu_time_spent_today("time_spent_today",531);

/*** Variable declaration ***/
mu_1__type_5 mu_total_time_for_activity("total_time_for_activity",579);

/*** Variable declaration ***/
mu_1__type_7 mu_total_time_for_activity_per_person("total_time_for_activity_per_person",1587);

/*** Variable declaration ***/
mu_1__type_8 mu_can_perform_activity_all("can_perform_activity_all",2595);

/*** Variable declaration ***/
mu_1__type_10 mu_in_order("in_order",2597);

/*** Variable declaration ***/
mu_1__type_12 mu_can_start_activity("can_start_activity",2615);

/*** Variable declaration ***/
mu_1__type_14 mu_can_perform_activity("can_perform_activity",2629);

/*** Variable declaration ***/
mu_1__type_17 mu_performing_activity("performing_activity",2643);

/*** Variable declaration ***/
mu_1__type_20 mu_paused_activity("paused_activity",2741);

/*** Variable declaration ***/
mu_1__type_21 mu_blocked_location("blocked_location",2839);

/*** Variable declaration ***/
mu_1__type_22 mu_busy_crewmember("busy_crewmember",2853);

/*** Variable declaration ***/
mu_1__type_23 mu_start_day("start_day",2855);

/*** Variable declaration ***/
mu_1__type_24 mu_complete_day("complete_day",2861);

/*** Variable declaration ***/
mu_1__type_26 mu_can_pause("can_pause",2867);

/*** Variable declaration ***/
mu_1__type_28 mu_activity_in_progress("activity_in_progress",2965);

/*** Variable declaration ***/
mu_1__type_29 mu_day_in_progress("day_in_progress",2979);

/*** Variable declaration ***/
mu_1__type_30 mu_schedule_in_progress("schedule_in_progress",2985);

/*** Variable declaration ***/
mu_1__type_32 mu_create_schedule_for_member("create_schedule_for_member",2987);

/*** Variable declaration ***/
mu_0_boolean mu_planner_in_progress("planner_in_progress",2993);


#include "inprog0.h"

void mu_set_can_perform_activity_all(const mu_1_crew_members& mu_crmem, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_can_perform_activity_all[mu_crmem].undefine();
else
  mu_can_perform_activity_all[mu_crmem] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_can_perform_activity_all(const mu_1_crew_members& mu_crmem)
{
return mu_can_perform_activity_all[mu_crmem];
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

void mu_set_performing_activity(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_1_location& mu_loc, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_performing_activity[mu_wrt][mu_crmem][mu_loc].undefine();
else
  mu_performing_activity[mu_wrt][mu_crmem][mu_loc] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_performing_activity(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem,const mu_1_location& mu_loc)
{
return mu_performing_activity[mu_wrt][mu_crmem][mu_loc];
	Error.Error("The end of function get_performing_activity reached without returning values.");
};
/*** end function declaration ***/

void mu_set_paused_activity(const mu_1_activity& mu_wrt, const mu_1_crew_members& mu_crmem, const mu_1_location& mu_loc, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_paused_activity[mu_wrt][mu_crmem][mu_loc].undefine();
else
  mu_paused_activity[mu_wrt][mu_crmem][mu_loc] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_paused_activity(const mu_1_activity& mu_wrt,const mu_1_crew_members& mu_crmem,const mu_1_location& mu_loc)
{
return mu_paused_activity[mu_wrt][mu_crmem][mu_loc];
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

void mu_set_planner_in_progress(const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_planner_in_progress.undefine();
else
  mu_planner_in_progress = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_planner_in_progress()
{
return mu_planner_in_progress;
	Error.Error("The end of function get_planner_in_progress reached without returning values.");
};
/*** end function declaration ***/

void mu_event_check()
{
/*** Variable declaration ***/
mu_0_boolean mu_event_triggered("event_triggered",0);

mu_event_triggered = mu_true;
{
  bool mu__while_expr_34;  mu__while_expr_34 = mu_event_triggered;
int mu__counter_33 = 0;
while (mu__while_expr_34) {
if ( ++mu__counter_33 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
};
mu__while_expr_34 = mu_event_triggered;
}
};
};
/*** end procedure declaration ***/

mu_0_boolean mu_DAs_violate_duration()
{
/*** Variable declaration ***/
mu_0_boolean mu_DA_duration_violated("DA_duration_violated",0);

mu_DA_duration_violated = mu_false;
return mu_DA_duration_violated;
	Error.Error("The end of function DAs_violate_duration reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_DAs_ongoing_in_goal_state()
{
/*** Variable declaration ***/
mu_0_boolean mu_DA_still_ongoing("DA_still_ongoing",0);

mu_DA_still_ongoing = mu_false;
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

mu_process_updated = mu_false;
mu_end_while = mu_false;
{
  bool mu__while_expr_36;  mu__while_expr_36 = !(mu_end_while);
int mu__counter_35 = 0;
while (mu__while_expr_36) {
if ( ++mu__counter_35 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( !(mu_process_updated) )
{
mu_end_while = mu_true;
}
else
{
mu_process_updated = mu_false;
}
};
mu__while_expr_36 = !(mu_end_while);
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
  mu_number_of_crew_members_with_task_complete.clear();
  mu_rem_time_for_activity.clear();
  mu_rem_time_today.clear();
  mu_time_spent_today.clear();
  mu_total_time_for_activity.clear();
  mu_total_time_for_activity_per_person.clear();
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
  mu_planner_in_progress.clear();
}
void world_class::undefine()
{
  mu_all_event_true.undefine();
  mu_h_n.undefine();
  mu_g_n.undefine();
  mu_f_n.undefine();
  mu_TIME.undefine();
  mu_number_of_crew_members_with_task_complete.undefine();
  mu_rem_time_for_activity.undefine();
  mu_rem_time_today.undefine();
  mu_time_spent_today.undefine();
  mu_total_time_for_activity.undefine();
  mu_total_time_for_activity_per_person.undefine();
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
  mu_planner_in_progress.undefine();
}
void world_class::reset()
{
  mu_all_event_true.reset();
  mu_h_n.reset();
  mu_g_n.reset();
  mu_f_n.reset();
  mu_TIME.reset();
  mu_number_of_crew_members_with_task_complete.reset();
  mu_rem_time_for_activity.reset();
  mu_rem_time_today.reset();
  mu_time_spent_today.reset();
  mu_total_time_for_activity.reset();
  mu_total_time_for_activity_per_person.reset();
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
  mu_planner_in_progress.reset();
}
std::vector<mu_0_boolean*> world_class::get_mu_bools()
{
	  std::vector<mu_0_boolean*> awesome;

      awesome.push_back(&(mu_all_event_true));
      awesome.push_back(&(mu_planner_in_progress));
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
    return var_arrays; 
}
std::vector<mu__real*> world_class::get_mu_nums()
{
	  std::vector<mu__real*> awesome;

      awesome.push_back(&(mu_number_of_crew_members_with_task_complete));
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
}

//WP WP WP WP WP
void world_class::fire_processes_plus()
{
}

//WP WP WP WP WP
void world_class::fire_processes_minus()
{
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
  mu_number_of_crew_members_with_task_complete.print(target, separator);
  mu_rem_time_for_activity.print(target, separator);
  mu_rem_time_today.print(target, separator);
  mu_time_spent_today.print(target, separator);
  mu_total_time_for_activity.print(target, separator);
  mu_total_time_for_activity_per_person.print(target, separator);
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
  mu_number_of_crew_members_with_task_complete.print(target, separator);
  mu_rem_time_for_activity.print(target, separator);
  mu_rem_time_today.print(target, separator);
  mu_time_spent_today.print(target, separator);
  mu_total_time_for_activity.print(target, separator);
  mu_total_time_for_activity_per_person.print(target, separator);
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
  mu_number_of_crew_members_with_task_complete.print_statistic();
  mu_rem_time_for_activity.print_statistic();
  mu_rem_time_today.print_statistic();
  mu_time_spent_today.print_statistic();
  mu_total_time_for_activity.print_statistic();
  mu_total_time_for_activity_per_person.print_statistic();
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
    mu_number_of_crew_members_with_task_complete.print_diff(prevstate,target,separator);
    mu_rem_time_for_activity.print_diff(prevstate,target,separator);
    mu_rem_time_today.print_diff(prevstate,target,separator);
    mu_time_spent_today.print_diff(prevstate,target,separator);
    mu_total_time_for_activity.print_diff(prevstate,target,separator);
    mu_total_time_for_activity_per_person.print_diff(prevstate,target,separator);
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
  mu_number_of_crew_members_with_task_complete.to_state( newstate );
  mu_rem_time_for_activity.to_state( newstate );
  mu_rem_time_today.to_state( newstate );
  mu_time_spent_today.to_state( newstate );
  mu_total_time_for_activity.to_state( newstate );
  mu_total_time_for_activity_per_person.to_state( newstate );
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
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" completing_all_activity , crmem:%s", mu_crmem.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr37;
bool mu__boolexpr38;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
    return mu__boolexpr37;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr39;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr42;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_planner_in_progress) ; 
}

 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_planner_in_progress)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr43;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr46;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_planner_in_progress) ; 
}

 	if (std::string(typeid(mu_rem_time_today[mu_crmem]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_rem_time_today[mu_crmem]), std::make_pair(0.000000e+00, 0))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
 	if (std::string(typeid(mu_rem_time_today[mu_crmem]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_rem_time_today[mu_crmem])); 
 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_planner_in_progress)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr47;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr48;
bool mu__boolexpr49;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr50;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_planner_in_progress) ; 
}

 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_planner_in_progress), 1)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr51;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr54;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (mu_planner_in_progress) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

    effs.push_back(&(mu_number_of_crew_members_with_task_complete));  // increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;


    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

    inter_effs.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_planner_in_progress), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    aeffs.push_back(&(mu_number_of_crew_members_with_task_complete)); //  increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
	      if (mu__boolexpr55) {
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
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
mu_schedule_in_progress[mu_crmem] = mu_false;
mu_planner_in_progress = mu_false;
mu_number_of_crew_members_with_task_complete = increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;



  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

mu_number_of_crew_members_with_task_complete = increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete );


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;



  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("( completing_all_activity %s)", mu_crmem.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
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
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" starting_day_for_crewmember , day:%s, crmem:%s", mu_day.Name(), mu_crmem.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr57;
bool mu__boolexpr58;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
    return mu__boolexpr57;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr59;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr62;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (!(mu_planner_in_progress)) ; 
}

 		if (std::string(typeid(mu_create_schedule_for_member[mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_create_schedule_for_member[mu_crmem][mu_day])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr63;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr64;
bool mu__boolexpr65;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr66;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (!(mu_planner_in_progress)) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
 		if (std::string(typeid(mu_create_schedule_for_member[mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_create_schedule_for_member[mu_crmem][mu_day])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr67;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr70;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (!(mu_planner_in_progress)) ; 
}

 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_planner_in_progress), 0)); 
 		if (std::string(typeid(mu_create_schedule_for_member[mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_create_schedule_for_member[mu_crmem][mu_day]), 1)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

bool mu__boolexpr71;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr72;
bool mu__boolexpr73;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr74;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (!(mu_planner_in_progress)) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

    effs.push_back(&(mu_rem_time_today[mu_crmem]));  // assign_rem_time_today_action_starting_day_for_crewmember(  ) 
    effs.push_back(&(mu_time_spent_today[mu_crmem]));  // assign_time_spent_today_action_starting_day_for_crewmember(  ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

    aeffs.push_back(&(mu_planner_in_progress)); //  mu_true 
    aeffs.push_back(&(mu_schedule_in_progress[mu_crmem])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

    inter_effs.insert(std::make_pair(&(mu_planner_in_progress), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_create_schedule_for_member[mu_crmem][mu_day]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    aeffs.push_back(&(mu_planner_in_progress)); //  mu_true 
    aeffs.push_back(&(mu_schedule_in_progress[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_rem_time_today[mu_crmem])); //  assign_rem_time_today_action_starting_day_for_crewmember(  ) 
    aeffs.push_back(&(mu_time_spent_today[mu_crmem])); //  assign_time_spent_today_action_starting_day_for_crewmember(  ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 2;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr75;
bool mu__boolexpr76;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
	      if (mu__boolexpr75) {
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
    r = what_rule - 2;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;
mu_create_schedule_for_member[mu_crmem][mu_day] = mu_false;
mu_rem_time_today[mu_crmem] = assign_rem_time_today_action_starting_day_for_crewmember(  );
mu_time_spent_today[mu_crmem] = assign_time_spent_today_action_starting_day_for_crewmember(  );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("( starting_day_for_crewmember %s %s)", mu_crmem.Name(), mu_day.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
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
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return tsprintf(" starting_day , day1:%s, day:%s", mu_day1.Name(), mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_in_order[mu_day1][mu_day]) ; 
}
    return mu__boolexpr77;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr80;
bool mu__boolexpr81;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr85;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr88;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (!(mu_complete_day[mu_day])) ; 
}

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
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr94;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr97;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (!(mu_complete_day[mu_day])) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
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
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr98;
bool mu__boolexpr99;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr103;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr106;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_complete_day[mu_day])) ; 
}

 		if (std::string(typeid(mu_complete_day[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_complete_day[mu_day]), 0)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 0)); 
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
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr112;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr113;
bool mu__boolexpr114;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr115;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (!(mu_complete_day[mu_day])) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

    aeffs.push_back(&(mu_day_in_progress[mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    aeffs.push_back(&(mu_day_in_progress[mu_day])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 5;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    while (what_rule < 14 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_in_order[mu_day1][mu_day]) ; 
}
	      if (mu__boolexpr116) {
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
    r = what_rule - 5;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
mu_day_in_progress[mu_day] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

mu_day_in_progress[mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

mu_day_in_progress[mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

mu_day_in_progress[mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 16);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return tsprintf("( starting_day %s %s)", mu_day.Name(), mu_day1.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
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
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return tsprintf(" completing_day , day:%s", mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
bool mu__boolexpr119;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_day_in_progress[mu_day]) ; 
}
    return mu__boolexpr119;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr120;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr121;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_day_in_progress[mu_day]) ; 
}

 	if (std::string(typeid(mu_number_of_crew_members_with_task_complete).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_number_of_crew_members_with_task_complete), std::make_pair(mu_number_of_crew_members, 0))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
 	if (std::string(typeid(mu_number_of_crew_members_with_task_complete).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_number_of_crew_members_with_task_complete)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr122;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

bool mu__boolexpr123;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_day_in_progress[mu_day]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

    effs.push_back(&(mu_number_of_crew_members_with_task_complete));  // assign_number_of_crew_members_with_task_complete_action_completing_day(  ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

    aeffs.push_back(&(mu_complete_day[mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_complete_day[mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    aeffs.push_back(&(mu_complete_day[mu_day])); //  mu_true 
    aeffs.push_back(&(mu_number_of_crew_members_with_task_complete)); //  assign_number_of_crew_members_with_task_complete_action_completing_day(  ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 14;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    while (what_rule < 17 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr124;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_day_in_progress[mu_day]) ; 
}
	      if (mu__boolexpr124) {
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
    r = what_rule - 14;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
mu_complete_day[mu_day] = mu_true;
mu_day_in_progress[mu_day] = mu_false;
mu_number_of_crew_members_with_task_complete = assign_number_of_crew_members_with_task_complete_action_completing_day(  );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 16);
    r = r / 3;
    return tsprintf("( completing_day %s)", mu_day.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
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
  if (what_rule>=1 && what_rule<2)
    { R1.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<5)
    { R2.NextRule(what_rule);
      if (what_rule<5) return; }
  if (what_rule>=5 && what_rule<14)
    { R3.NextRule(what_rule);
      if (what_rule<14) return; }
  if (what_rule>=14 && what_rule<17)
    { R4.NextRule(what_rule);
      if (what_rule<17) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=1) return R1.Condition(r-1);
  if (r>=2 && r<=4) return R2.Condition(r-2);
  if (r>=5 && r<=13) return R3.Condition(r-5);
  if (r>=14 && r<=16) return R4.Condition(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=1) return R1.bool_precond_array(r-1);
  if (r>=2 && r<=4) return R2.bool_precond_array(r-2);
  if (r>=5 && r<=13) return R3.bool_precond_array(r-5);
  if (r>=14 && r<=16) return R4.bool_precond_array(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=1) return R1.num_precond_array(r-1);
  if (r>=2 && r<=4) return R2.num_precond_array(r-2);
  if (r>=5 && r<=13) return R3.num_precond_array(r-5);
  if (r>=14 && r<=16) return R4.num_precond_array(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=1) return R1.all_precond_array(r-1);
  if (r>=2 && r<=4) return R2.all_precond_array(r-2);
  if (r>=5 && r<=13) return R3.all_precond_array(r-5);
  if (r>=14 && r<=16) return R4.all_precond_array(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=1) return R1.precond_bool_interference(r-1);
  if (r>=2 && r<=4) return R2.precond_bool_interference(r-2);
  if (r>=5 && r<=13) return R3.precond_bool_interference(r-5);
  if (r>=14 && r<=16) return R4.precond_bool_interference(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=1) return R1.temporal_constraints(r-1);
  if (r>=2 && r<=4) return R2.temporal_constraints(r-2);
  if (r>=5 && r<=13) return R3.temporal_constraints(r-5);
  if (r>=14 && r<=16) return R4.temporal_constraints(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=1) return R1.effects_bool_interference(r-1);
  if (r>=2 && r<=4) return R2.effects_bool_interference(r-2);
  if (r>=5 && r<=13) return R3.effects_bool_interference(r-5);
  if (r>=14 && r<=16) return R4.effects_bool_interference(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=1) return R1.effects_add_bool_array(r-1);
  if (r>=2 && r<=4) return R2.effects_add_bool_array(r-2);
  if (r>=5 && r<=13) return R3.effects_add_bool_array(r-5);
  if (r>=14 && r<=16) return R4.effects_add_bool_array(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=1) return R1.effects_num_array(r-1);
  if (r>=2 && r<=4) return R2.effects_num_array(r-2);
  if (r>=5 && r<=13) return R3.effects_num_array(r-5);
  if (r>=14 && r<=16) return R4.effects_num_array(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=1) return R1.effects_all_array(r-1);
  if (r>=2 && r<=4) return R2.effects_all_array(r-2);
  if (r>=5 && r<=13) return R3.effects_all_array(r-5);
  if (r>=14 && r<=16) return R4.effects_all_array(r-14);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code(r-1); return; } 
  if (r>=2 && r<=4) { R2.Code(r-2); return; } 
  if (r>=5 && r<=13) { R3.Code(r-5); return; } 
  if (r>=14 && r<=16) { R4.Code(r-14); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code_ff(r-1); return; } 
  if (r>=2 && r<=4) { R2.Code_ff(r-2); return; } 
  if (r>=5 && r<=13) { R3.Code_ff(r-5); return; } 
  if (r>=14 && r<=16) { R4.Code_ff(r-14); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code_numeric_ff_plus(r-1); return; } 
  if (r>=2 && r<=4) { R2.Code_numeric_ff_plus(r-2); return; } 
  if (r>=5 && r<=13) { R3.Code_numeric_ff_plus(r-5); return; } 
  if (r>=14 && r<=16) { R4.Code_numeric_ff_plus(r-14); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code_numeric_ff_minus(r-1); return; } 
  if (r>=2 && r<=4) { R2.Code_numeric_ff_minus(r-2); return; } 
  if (r>=5 && r<=13) { R3.Code_numeric_ff_minus(r-5); return; } 
  if (r>=14 && r<=16) { R4.Code_numeric_ff_minus(r-14); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=1) { return R1.get_rule_clock_started(r-1); } 
  if (r>=2 && r<=4) { return R2.get_rule_clock_started(r-2); } 
  if (r>=5 && r<=13) { return R3.get_rule_clock_started(r-5); } 
  if (r>=14 && r<=16) { return R4.get_rule_clock_started(r-14); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=1) { return R1.get_clocks(r-1); } 
  if (r>=2 && r<=4) { return R2.get_clocks(r-2); } 
  if (r>=5 && r<=13) { return R3.get_clocks(r-5); } 
  if (r>=14 && r<=16) { return R4.get_clocks(r-14); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=1) { return R1.Priority(); } 
  if (r>=2 && r<=4) { return R2.Priority(); } 
  if (r>=5 && r<=13) { return R3.Priority(); } 
  if (r>=14 && r<=16) { return R4.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=1) return R1.Name(r-1);
  if (r>=2 && r<=4) return R2.Name(r-2);
  if (r>=5 && r<=13) return R3.Name(r-5);
  if (r>=14 && r<=16) return R4.Name(r-14);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=1) return R1.Duration(r-1);
  if (r>=2 && r<=4) return R2.Duration(r-2);
  if (r>=5 && r<=13) return R3.Duration(r-5);
  if (r>=14 && r<=16) return R4.Duration(r-14);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=1) return R1.Weight(r-1);
  if (r>=2 && r<=4) return R2.Weight(r-2);
  if (r>=5 && r<=13) return R3.Weight(r-5);
  if (r>=14 && r<=16) return R4.Weight(r-14);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=1) return R1.PDDLName(r-1);
  if (r>=2 && r<=4) return R2.PDDLName(r-2);
  if (r>=5 && r<=13) return R3.PDDLName(r-5);
  if (r>=14 && r<=16) return R4.PDDLName(r-14);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=1) return R1.PDDLClass(r-1);
  if (r>=2 && r<=4) return R2.PDDLClass(r-2);
  if (r>=5 && r<=13) return R3.PDDLClass(r-5);
  if (r>=14 && r<=16) return R4.PDDLClass(r-14);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 17;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 17


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
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_set_can_perform_activity_all ( mu_crmem, mu_false );
};
};
{
for(int mu_day1 = 16; mu_day1 <= 18; mu_day1++) {
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_set_in_order ( mu_day1, mu_day, mu_false );
};
};
};
};
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
mu_set_can_start_activity ( mu_crmem, mu_wrt, mu_false );
};
};
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_set_can_perform_activity ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
{
for(int mu_loc = 9; mu_loc <= 15; mu_loc++) {
mu_set_performing_activity ( mu_wrt, mu_crmem, mu_loc, mu_false );
};
};
};
};
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
{
for(int mu_loc = 9; mu_loc <= 15; mu_loc++) {
mu_set_paused_activity ( mu_wrt, mu_crmem, mu_loc, mu_false );
};
};
};
};
};
};
{
for(int mu_loc = 9; mu_loc <= 15; mu_loc++) {
mu_set_blocked_location ( mu_loc, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_set_busy_crewmember ( mu_crmem, mu_false );
};
};
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_set_start_day ( mu_day, mu_false );
};
};
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_set_complete_day ( mu_day, mu_false );
};
};
{
for(int mu_act1 = 2; mu_act1 <= 8; mu_act1++) {
{
for(int mu_act2 = 2; mu_act2 <= 8; mu_act2++) {
mu_set_can_pause ( mu_act1, mu_act2, mu_false );
};
};
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_set_activity_in_progress ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_set_day_in_progress ( mu_day, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_set_schedule_in_progress ( mu_crmem, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_set_create_schedule_for_member ( mu_crmem, mu_day, mu_false );
};
};
};
};
mu_set_planner_in_progress ( mu_false );
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_time_spent_today[mu_crmem] = 0.000000e+00;
};
};
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_rem_time_today[mu_crmem] = 0.000000e+00;
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 1; mu_crmem++) {
mu_rem_time_for_activity[mu_wrt][mu_crmem] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_total_time_for_activity[mu_wrt][mu_day] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 2; mu_wrt <= 8; mu_wrt++) {
{
for(int mu_day = 16; mu_day <= 18; mu_day++) {
mu_total_time_for_activity_per_person[mu_wrt][mu_day] = 0.000000e+00;
};
};
};
};
mu_number_of_crew_members_with_task_complete = 0.000000e+00;
mu_in_order[mu_day0][mu_day1] = mu_true;
mu_in_order[mu_day1][mu_day2] = mu_true;
mu_complete_day[mu_day0] = mu_true;
mu_create_schedule_for_member[mu_a][mu_day1] = mu_true;
mu_create_schedule_for_member[mu_a][mu_day2] = mu_true;
mu_day_in_progress[mu_day1] = mu_false;
mu_day_in_progress[mu_day2] = mu_false;
mu_complete_day[mu_day1] = mu_false;
mu_complete_day[mu_day2] = mu_false;
mu_number_of_crew_members_with_task_complete = 0.000000e+00;
mu_rem_time_today[mu_a] = 0.000000e+00;
mu_time_spent_today[mu_a] = 0.000000e+00;
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
int mu__goal_125() // Goal "enjoy"
{
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (!(mu_day_in_progress[mu_day1])) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (!(mu_day_in_progress[mu_day2])) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr126;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (!(mu_day_in_progress[mu_day1])) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (!(mu_day_in_progress[mu_day2])) ; 
}
bool mu__boolexpr133;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (!(mu_day_in_progress[mu_day1])) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (!(mu_day_in_progress[mu_day2])) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (!(mu_day_in_progress[mu_day1])) ; 
}
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (!(mu_day_in_progress[mu_day1])) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (!(mu_day_in_progress[mu_day2])) ; 
}
bool mu__boolexpr142;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_complete_day[mu_day2]) ; 
}
bool mu__boolexpr143;
bool mu__boolexpr144;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (!(mu_day_in_progress[mu_day1])) ; 
}
bool mu__boolexpr145;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_complete_day[mu_day2]) ; 
}

 if (std::string(typeid(mu_complete_day[mu_day1]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_complete_day[mu_day1])); 
 if (std::string(typeid(mu_complete_day[mu_day2]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_complete_day[mu_day2])); 

    return bool_goal_conds;
  }

  std::map<mu__real*, std::pair<double, int> > get_numeric_goal_conditions()
  {
    std::map<mu__real*, std::pair<double, int> > numeric_goal_conds;

    return numeric_goal_conds;
  }

bool mu__condition_146() // Condition for Rule "enjoy"
{
  return mu__goal_125( );
}

bool mu__goal__00(){ return mu__condition_146(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_146, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_147() // Invariant "todo bien"
{
bool mu__boolexpr148;
  if (!(mu_all_event_true)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr148;
};

bool mu__condition_149() // Condition for Rule "todo bien"
{
  return mu__invariant_147( );
}

bool mu__goal__01(){ return mu__condition_149(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_149, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
create_schedule_for_member:NoScalarset
can_pause:NoScalarset
can_start_activity:NoScalarset
can_perform_activity_all:NoScalarset
total_time_for_activity_per_person:NoScalarset
time_spent_today:NoScalarset
rem_time_today:NoScalarset
rem_time_for_activity:NoScalarset
TIME:NoScalarset
g_n:NoScalarset
all_event_true:NoScalarset
h_n:NoScalarset
f_n:NoScalarset
number_of_crew_members_with_task_complete:NoScalarset
total_time_for_activity:NoScalarset
in_order:NoScalarset
can_perform_activity:NoScalarset
performing_activity:NoScalarset
paused_activity:NoScalarset
blocked_location:NoScalarset
busy_crewmember:NoScalarset
start_day:NoScalarset
complete_day:NoScalarset
activity_in_progress:NoScalarset
day_in_progress:NoScalarset
schedule_in_progress:NoScalarset
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
        mu_create_schedule_for_member.MultisetSort();
        mu_can_pause.MultisetSort();
        mu_can_start_activity.MultisetSort();
        mu_can_perform_activity_all.MultisetSort();
        mu_total_time_for_activity_per_person.MultisetSort();
        mu_time_spent_today.MultisetSort();
        mu_rem_time_today.MultisetSort();
        mu_rem_time_for_activity.MultisetSort();
        mu_TIME.MultisetSort();
        mu_g_n.MultisetSort();
        mu_all_event_true.MultisetSort();
        mu_h_n.MultisetSort();
        mu_f_n.MultisetSort();
        mu_number_of_crew_members_with_task_complete.MultisetSort();
        mu_total_time_for_activity.MultisetSort();
        mu_in_order.MultisetSort();
        mu_can_perform_activity.MultisetSort();
        mu_performing_activity.MultisetSort();
        mu_paused_activity.MultisetSort();
        mu_blocked_location.MultisetSort();
        mu_busy_crewmember.MultisetSort();
        mu_start_day.MultisetSort();
        mu_complete_day.MultisetSort();
        mu_activity_in_progress.MultisetSort();
        mu_day_in_progress.MultisetSort();
        mu_schedule_in_progress.MultisetSort();
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
  for (j=0; j<1; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<7; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<1; j++)
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
              
              mu_create_schedule_for_member.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_create_schedule_for_member.MultisetSort();
              mu_can_pause.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_pause.MultisetSort();
              mu_can_start_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_start_activity.MultisetSort();
              mu_can_perform_activity_all.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_perform_activity_all.MultisetSort();
              mu_total_time_for_activity_per_person.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity_per_person.MultisetSort();
              mu_time_spent_today.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_time_spent_today.MultisetSort();
              mu_rem_time_today.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_rem_time_today.MultisetSort();
              mu_rem_time_for_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_rem_time_for_activity.MultisetSort();
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
              mu_number_of_crew_members_with_task_complete.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_number_of_crew_members_with_task_complete.MultisetSort();
              mu_total_time_for_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity.MultisetSort();
              mu_in_order.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_in_order.MultisetSort();
              mu_can_perform_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_perform_activity.MultisetSort();
              mu_performing_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_performing_activity.MultisetSort();
              mu_paused_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_paused_activity.MultisetSort();
              mu_blocked_location.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_blocked_location.MultisetSort();
              mu_busy_crewmember.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_busy_crewmember.MultisetSort();
              mu_start_day.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_start_day.MultisetSort();
              mu_complete_day.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_complete_day.MultisetSort();
              mu_activity_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_activity_in_progress.MultisetSort();
              mu_day_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_day_in_progress.MultisetSort();
              mu_schedule_in_progress.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_schedule_in_progress.MultisetSort();
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

          mu_create_schedule_for_member.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_create_schedule_for_member.MultisetSort();
          mu_can_pause.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_pause.MultisetSort();
          mu_can_start_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_start_activity.MultisetSort();
          mu_can_perform_activity_all.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_perform_activity_all.MultisetSort();
          mu_total_time_for_activity_per_person.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_total_time_for_activity_per_person.MultisetSort();
          mu_time_spent_today.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_time_spent_today.MultisetSort();
          mu_rem_time_today.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_rem_time_today.MultisetSort();
          mu_rem_time_for_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_rem_time_for_activity.MultisetSort();
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
          mu_number_of_crew_members_with_task_complete.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_number_of_crew_members_with_task_complete.MultisetSort();
          mu_total_time_for_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_total_time_for_activity.MultisetSort();
          mu_in_order.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_in_order.MultisetSort();
          mu_can_perform_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_perform_activity.MultisetSort();
          mu_performing_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_performing_activity.MultisetSort();
          mu_paused_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_paused_activity.MultisetSort();
          mu_blocked_location.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_blocked_location.MultisetSort();
          mu_busy_crewmember.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_busy_crewmember.MultisetSort();
          mu_start_day.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_start_day.MultisetSort();
          mu_complete_day.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_complete_day.MultisetSort();
          mu_activity_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_activity_in_progress.MultisetSort();
          mu_day_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_day_in_progress.MultisetSort();
          mu_schedule_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_schedule_in_progress.MultisetSort();
          mu_planner_in_progress.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_planner_in_progress.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_create_schedule_for_member.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_create_schedule_for_member.MultisetSort();
              mu_can_pause.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_pause.MultisetSort();
              mu_can_start_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_start_activity.MultisetSort();
              mu_can_perform_activity_all.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_perform_activity_all.MultisetSort();
              mu_total_time_for_activity_per_person.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity_per_person.MultisetSort();
              mu_time_spent_today.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_time_spent_today.MultisetSort();
              mu_rem_time_today.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_rem_time_today.MultisetSort();
              mu_rem_time_for_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_rem_time_for_activity.MultisetSort();
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
              mu_number_of_crew_members_with_task_complete.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_number_of_crew_members_with_task_complete.MultisetSort();
              mu_total_time_for_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_total_time_for_activity.MultisetSort();
              mu_in_order.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_in_order.MultisetSort();
              mu_can_perform_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_perform_activity.MultisetSort();
              mu_performing_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_performing_activity.MultisetSort();
              mu_paused_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_paused_activity.MultisetSort();
              mu_blocked_location.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_blocked_location.MultisetSort();
              mu_busy_crewmember.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_busy_crewmember.MultisetSort();
              mu_start_day.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_start_day.MultisetSort();
              mu_complete_day.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_complete_day.MultisetSort();
              mu_activity_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_activity_in_progress.MultisetSort();
              mu_day_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_day_in_progress.MultisetSort();
              mu_schedule_in_progress.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_schedule_in_progress.MultisetSort();
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
      mu_create_schedule_for_member.MultisetSort();
      mu_can_pause.MultisetSort();
      mu_can_start_activity.MultisetSort();
      mu_can_perform_activity_all.MultisetSort();
      mu_total_time_for_activity_per_person.MultisetSort();
      mu_time_spent_today.MultisetSort();
      mu_rem_time_today.MultisetSort();
      mu_rem_time_for_activity.MultisetSort();
      mu_TIME.MultisetSort();
      mu_g_n.MultisetSort();
      mu_all_event_true.MultisetSort();
      mu_h_n.MultisetSort();
      mu_f_n.MultisetSort();
      mu_number_of_crew_members_with_task_complete.MultisetSort();
      mu_total_time_for_activity.MultisetSort();
      mu_in_order.MultisetSort();
      mu_can_perform_activity.MultisetSort();
      mu_performing_activity.MultisetSort();
      mu_paused_activity.MultisetSort();
      mu_blocked_location.MultisetSort();
      mu_busy_crewmember.MultisetSort();
      mu_start_day.MultisetSort();
      mu_complete_day.MultisetSort();
      mu_activity_in_progress.MultisetSort();
      mu_day_in_progress.MultisetSort();
      mu_schedule_in_progress.MultisetSort();
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
        mu_number_of_crew_members_with_task_complete.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_number_of_crew_members_with_task_complete.MultisetSort();
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
