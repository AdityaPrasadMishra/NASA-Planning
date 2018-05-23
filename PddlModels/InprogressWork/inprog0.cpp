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
#define PROBLEM_FILENAME "inproquestg0_withsingleinst.pddl"
#define DISCRETIZATION 1.000000
#define VAL_PATHNAME "/home/aditya/DiNo/src/DiNo/../VAL-master/validate"
#define BITS_IN_WORLD 3405
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

  mu_1_crew_members (const char *name, int os): mu__byte(1, 4, 3, name, os) {};
  mu_1_crew_members (void): mu__byte(1, 4, 3) {};
  mu_1_crew_members (int val): mu__byte(1, 4, 3, "Parameter or function result.", 0)
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

const char *mu_1_crew_members::values[] = {"a","b","c","d",NULL };

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
      return ( s << mu_1_activity::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_activity (const char *name, int os): mu__byte(5, 9, 3, name, os) {};
  mu_1_activity (void): mu__byte(5, 9, 3) {};
  mu_1_activity (int val): mu__byte(5, 9, 3, "Parameter or function result.", 0)
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

const char *mu_1_activity::values[] = {"work","exercise","sleep","nothing","breakfast",NULL };

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
      return ( s << mu_1_location::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_location (const char *name, int os): mu__byte(10, 10, 1, name, os) {};
  mu_1_location (void): mu__byte(10, 10, 1) {};
  mu_1_location (int val): mu__byte(10, 10, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -10]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -10],separator); 
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
      return ( s << mu_1_days::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_days (const char *name, int os): mu__byte(11, 13, 2, name, os) {};
  mu_1_days (void): mu__byte(11, 13, 2) {};
  mu_1_days (int val): mu__byte(11, 13, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -11]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -11],separator); 
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
  mu_1_real_type array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"c", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1/*:public mu_1__type_super*/
{
 public:
  mu_1__type_0 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 192 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"b", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"b", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 48 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
  mu_1__type_4 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
  mu_1__type_6 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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
  }
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9/*:public mu_1__type_super*/
{
 public:
  mu_1__type_8 array[ 4 ]; 
#define awesome_mu_00_mu_1__type_8_mu_1__type_9 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1__type_8& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_10 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
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

if (n) array[i].set_self_ar(n,"day0", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11/*:public mu_1__type_super*/
{
 public:
  mu_1__type_10 array[ 3 ]; 
#define awesome_mu_00_mu_1__type_10_mu_1__type_11 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1__type_10& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
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

if (n) array[i].set_self_ar(n,"day0", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day1", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"day2", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_12 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13/*:public mu_1__type_super*/
{
 public:
  mu_1__type_12 array[ 4 ]; 
#define awesome_mu_00_mu_1__type_12_mu_1__type_13 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_1__type_12& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 4 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_14 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15/*:public mu_1__type_super*/
{
 public:
  mu_1__type_14 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_16 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 10 ) && ( index <= 10 ) )
      return array[ index - 10 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 10 ];
#endif
  };
  mu_1__type_16& operator= (const mu_1__type_16& from)
  {
      array[0].value(from.array[0].value());
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

if (n) array[i].set_self_ar(n,"loca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17/*:public mu_1__type_super*/
{
 public:
  mu_1__type_16 array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18/*:public mu_1__type_super*/
{
 public:
  mu_1__type_17 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20/*:public mu_1__type_super*/
{
 public:
  mu_1__type_19 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1__type_21/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
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
    if ( ( index >= 10 ) && ( index <= 10 ) )
      return array[ index - 10 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 10 ];
#endif
  };
  mu_1__type_21& operator= (const mu_1__type_21& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_21& a, mu_1__type_21& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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
  }
mu_1__type_21::~mu_1__type_21()
{
}
/*** end array declaration ***/
mu_1__type_21 mu_1__type_21_undefined_var;

class mu_1__type_22/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_25& operator= (const mu_1__type_25& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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
  }
mu_1__type_25::~mu_1__type_25()
{
}
/*** end array declaration ***/
mu_1__type_25 mu_1__type_25_undefined_var;

class mu_1__type_26/*:public mu_1__type_super*/
{
 public:
  mu_1__type_25 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_26& operator= (const mu_1__type_26& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_26::~mu_1__type_26()
{
}
/*** end array declaration ***/
mu_1__type_26 mu_1__type_26_undefined_var;

class mu_1__type_27/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"c", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_27::~mu_1__type_27()
{
}
/*** end array declaration ***/
mu_1__type_27 mu_1__type_27_undefined_var;

class mu_1__type_28/*:public mu_1__type_super*/
{
 public:
  mu_1__type_27 array[ 5 ]; 
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
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_28& operator= (const mu_1__type_28& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
  mu_0_boolean array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"b", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
  mu_1__type_31 array[ 4 ]; 
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
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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
if (n) array[i].set_self_ar(n,"b", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 11 ) && ( index <= 13 ) )
      return array[ index - 11 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 11 ];
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
  mu_1__type_33 array[ 4 ]; 
#define awesome_mu_00_mu_1__type_33_mu_1__type_34 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_34 (const char *n, int os) { set_self(n, os); };
  mu_1__type_34 ( void ) {};
  virtual ~mu_1__type_34 ();
  mu_1__type_33& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 4 ) )
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
  mu_1__type_34& operator= (const mu_1__type_34& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
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
    for (int i = 0; i < 4; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 4; i++)
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

if (n) array[i].set_self_ar(n,"a", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"b", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"c", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"d", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_34::~mu_1__type_34()
{
}
/*** end array declaration ***/
mu_1__type_34 mu_1__type_34_undefined_var;

class mu_1__type_35/*:public mu_1__type_super*/
{
 public:
  mu_1__type_34 array[ 5 ]; 
#define awesome_mu_00_mu_1__type_34_mu_1__type_35 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_35 (const char *n, int os) { set_self(n, os); };
  mu_1__type_35 ( void ) {};
  virtual ~mu_1__type_35 ();
  mu_1__type_34& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 5 ) && ( index <= 9 ) )
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
  mu_1__type_35& operator= (const mu_1__type_35& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"work", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"exercise", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"sleep", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nothing", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"breakfast", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_35::~mu_1__type_35()
{
}
/*** end array declaration ***/
mu_1__type_35 mu_1__type_35_undefined_var;

const int mu_a = 1;
const int mu_b = 2;
const int mu_c = 3;
const int mu_d = 4;
const int mu_work = 5;
const int mu_exercise = 6;
const int mu_sleep = 7;
const int mu_nothing = 8;
const int mu_breakfast = 9;
const int mu_loca = 10;
const int mu_day0 = 11;
const int mu_day1 = 12;
const int mu_day2 = 13;
const double mu_T = +1.000000e+00;
const double mu_number_of_crew_members = +4.000000e+00;
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
mu_1__type_2 mu_rem_time_today("rem_time_today",1107);

/*** Variable declaration ***/
mu_1__type_3 mu_time_spent_today("time_spent_today",1299);

/*** Variable declaration ***/
mu_1__type_5 mu_total_time_for_activity("total_time_for_activity",1491);

/*** Variable declaration ***/
mu_1__type_7 mu_total_time_for_activity_per_person("total_time_for_activity_per_person",2211);

/*** Variable declaration ***/
mu_1__type_9 mu_can_perform_activity_all("can_perform_activity_all",2931);

/*** Variable declaration ***/
mu_1__type_11 mu_in_order("in_order",2955);

/*** Variable declaration ***/
mu_1__type_13 mu_can_start_activity("can_start_activity",2973);

/*** Variable declaration ***/
mu_1__type_15 mu_can_perform_activity("can_perform_activity",3013);

/*** Variable declaration ***/
mu_1__type_18 mu_performing_activity("performing_activity",3053);

/*** Variable declaration ***/
mu_1__type_20 mu_paused_activity("paused_activity",3093);

/*** Variable declaration ***/
mu_1__type_21 mu_blocked_location("blocked_location",3133);

/*** Variable declaration ***/
mu_1__type_22 mu_busy_crewmember("busy_crewmember",3135);

/*** Variable declaration ***/
mu_1__type_23 mu_start_day("start_day",3143);

/*** Variable declaration ***/
mu_1__type_24 mu_complete_day("complete_day",3149);

/*** Variable declaration ***/
mu_1__type_26 mu_can_pause("can_pause",3155);

/*** Variable declaration ***/
mu_1__type_28 mu_activity_in_progress("activity_in_progress",3205);

/*** Variable declaration ***/
mu_1__type_29 mu_day_in_progress("day_in_progress",3245);

/*** Variable declaration ***/
mu_1__type_30 mu_schedule_in_progress("schedule_in_progress",3251);

/*** Variable declaration ***/
mu_1__type_32 mu_create_schedule_for_member("create_schedule_for_member",3259);

/*** Variable declaration ***/
mu_1__type_35 mu_already_completed("already_completed",3283);

/*** Variable declaration ***/
mu_0_boolean mu_planner_in_progress("planner_in_progress",3403);


#include "inprog0.h"

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
  bool mu__while_expr_37;  mu__while_expr_37 = mu_event_triggered;
int mu__counter_36 = 0;
while (mu__while_expr_37) {
if ( ++mu__counter_36 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
};
mu__while_expr_37 = mu_event_triggered;
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
  bool mu__while_expr_39;  mu__while_expr_39 = !(mu_end_while);
int mu__counter_38 = 0;
while (mu__while_expr_39) {
if ( ++mu__counter_38 > args->loopmax.value )
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
mu__while_expr_39 = !(mu_end_while);
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
  mu_already_completed.reset();
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
      interm = mu_already_completed.bool_array();
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
      interm = mu_already_completed.num_array();
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
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return tsprintf(" completing_all_activity , day:%s, crmem:%s", mu_day.Name(), mu_crmem.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
bool mu__boolexpr40;
bool mu__boolexpr41;
bool mu__boolexpr42;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
    return mu__boolexpr40;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr48;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr49;
bool mu__boolexpr50;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr51;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (mu_schedule_in_progress[mu_crmem]) ; 
}

 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_planner_in_progress)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr57;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr60;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_schedule_in_progress[mu_crmem]) ; 
}

 	if (std::string(typeid(mu_rem_time_today[mu_crmem]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_rem_time_today[mu_crmem]), std::make_pair(0.000000e+00, 0))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
 	if (std::string(typeid(mu_rem_time_today[mu_crmem]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_rem_time_today[mu_crmem])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_planner_in_progress)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr61;
bool mu__boolexpr62;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr66;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr67;
bool mu__boolexpr68;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr69;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_schedule_in_progress[mu_crmem]) ; 
}

 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 
 		if (std::string(typeid(mu_planner_in_progress).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_planner_in_progress), 1)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
bool mu__boolexpr75;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr76;
bool mu__boolexpr77;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_planner_in_progress) ; 
}
bool mu__boolexpr78;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_schedule_in_progress[mu_crmem]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

    effs.push_back(&(mu_number_of_crew_members_with_task_complete));  // increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;


    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

    inter_effs.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_planner_in_progress), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_can_perform_activity_all[mu_crmem][mu_day]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    aeffs.push_back(&(mu_number_of_crew_members_with_task_complete)); //  increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    while (what_rule < 13 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_planner_in_progress) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_rem_time_today[mu_crmem]) == (0.000000e+00)) ; 
}
	      if (mu__boolexpr79) {
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
mu_schedule_in_progress[mu_crmem] = mu_false;
mu_planner_in_progress = mu_false;
mu_can_perform_activity_all[mu_crmem][mu_day] = mu_false;
mu_number_of_crew_members_with_task_complete = increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;



  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

mu_number_of_crew_members_with_task_complete = increase_number_of_crew_members_with_task_complete_action_completing_all_activity( mu_number_of_crew_members_with_task_complete );


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;



  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return tsprintf("( completing_all_activity %s %s)", mu_crmem.Name(), mu_day.Name());
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return tsprintf(" starting_day_for_crewmember , day:%s, crmem:%s", mu_day.Name(), mu_crmem.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
    return mu__boolexpr82;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr84;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr87;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (!(mu_planner_in_progress)) ; 
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr88;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr91;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (!(mu_planner_in_progress)) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr92;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr93;
bool mu__boolexpr94;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr95;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (!(mu_planner_in_progress)) ; 
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

bool mu__boolexpr96;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (!(mu_planner_in_progress)) ; 
}
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr99;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (!(mu_planner_in_progress)) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

    effs.push_back(&(mu_rem_time_today[mu_crmem]));  // assign_rem_time_today_action_starting_day_for_crewmember(  ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

    aeffs.push_back(&(mu_planner_in_progress)); //  mu_true 
    aeffs.push_back(&(mu_schedule_in_progress[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_can_perform_activity_all[mu_crmem][mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

    inter_effs.insert(std::make_pair(&(mu_planner_in_progress), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_can_perform_activity_all[mu_crmem][mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_create_schedule_for_member[mu_crmem][mu_day]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    aeffs.push_back(&(mu_planner_in_progress)); //  mu_true 
    aeffs.push_back(&(mu_schedule_in_progress[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_can_perform_activity_all[mu_crmem][mu_day])); //  mu_true 
    aeffs.push_back(&(mu_rem_time_today[mu_crmem])); //  assign_rem_time_today_action_starting_day_for_crewmember(  ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 13;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    while (what_rule < 25 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr100;
bool mu__boolexpr101;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (!(mu_planner_in_progress)) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_create_schedule_for_member[mu_crmem][mu_day]) ; 
}
	      if (mu__boolexpr100) {
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;
mu_can_perform_activity_all[mu_crmem][mu_day] = mu_true;
mu_create_schedule_for_member[mu_crmem][mu_day] = mu_false;
mu_rem_time_today[mu_crmem] = assign_rem_time_today_action_starting_day_for_crewmember(  );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;
mu_can_perform_activity_all[mu_crmem][mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;
mu_can_perform_activity_all[mu_crmem][mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

mu_planner_in_progress = mu_true;
mu_schedule_in_progress[mu_crmem] = mu_true;
mu_can_perform_activity_all[mu_crmem][mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
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
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return tsprintf(" starting_day , day1:%s, day:%s", mu_day1.Name(), mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_in_order[mu_day1][mu_day]) ; 
}
    return mu__boolexpr102;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr105;
bool mu__boolexpr106;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr110;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr113;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (!(mu_complete_day[mu_day])) ; 
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
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_complete_day[mu_day1]) ; 
}
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
bool mu__boolexpr119;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr120;
bool mu__boolexpr121;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr122;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (!(mu_complete_day[mu_day])) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
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
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr123;
bool mu__boolexpr124;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr128;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr131;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (!(mu_complete_day[mu_day])) ; 
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
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (mu_in_order[mu_day1][mu_day]) ; 
}
bool mu__boolexpr137;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (!(mu_complete_day[mu_day])) ; 
}
bool mu__boolexpr138;
bool mu__boolexpr139;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_complete_day[mu_day1]) ; 
}
bool mu__boolexpr140;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (!(mu_complete_day[mu_day])) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

    aeffs.push_back(&(mu_day_in_progress[mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_planner_in_progress), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    aeffs.push_back(&(mu_day_in_progress[mu_day])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 25;
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    while (what_rule < 34 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
  if (!(!(mu_day_in_progress[mu_day]))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (!(mu_complete_day[mu_day])) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_complete_day[mu_day1]) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_in_order[mu_day1][mu_day]) ; 
}
	      if (mu__boolexpr141) {
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
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
mu_day_in_progress[mu_day] = mu_true;
mu_planner_in_progress = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

mu_day_in_progress[mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

mu_day_in_progress[mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

mu_day_in_progress[mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day1;
    mu_day1.value((r % 3) + 11);
    r = r / 3;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return tsprintf(" completing_day , day:%s", mu_day.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
bool mu__boolexpr144;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_day_in_progress[mu_day]) ; 
}
    return mu__boolexpr144;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr145;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr146;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_day_in_progress[mu_day]) ; 
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
    mu_day.value((r % 3) + 11);
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
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr147;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

bool mu__boolexpr148;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (mu_day_in_progress[mu_day]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

    effs.push_back(&(mu_number_of_crew_members_with_task_complete));  // assign_number_of_crew_members_with_task_complete_action_completing_day(  ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

    aeffs.push_back(&(mu_complete_day[mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

    inter_effs.insert(std::make_pair(&(mu_complete_day[mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    aeffs.push_back(&(mu_complete_day[mu_day])); //  mu_true 
    aeffs.push_back(&(mu_number_of_crew_members_with_task_complete)); //  assign_number_of_crew_members_with_task_complete_action_completing_day(  ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 34;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    while (what_rule < 37 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr149;
  if (!((mu_number_of_crew_members_with_task_complete) == (mu_number_of_crew_members))) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_day_in_progress[mu_day]) ; 
}
	      if (mu__boolexpr149) {
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
    mu_day.value((r % 3) + 11);
    r = r / 3;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
mu_complete_day[mu_day] = mu_true;
mu_day_in_progress[mu_day] = mu_false;
mu_number_of_crew_members_with_task_complete = assign_number_of_crew_members_with_task_complete_action_completing_day(  );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

mu_complete_day[mu_day] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    return tsprintf("( completing_day %s)", mu_day.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return tsprintf(" completing_activity , day:%s, loc:%s, crmem:%s, wrt:%s", mu_day.Name(), mu_loc.Name(), mu_crmem.Name(), mu_wrt.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_blocked_location[mu_loc]) ; 
}
    return mu__boolexpr150;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_blocked_location[mu_loc]) ; 
}
bool mu__boolexpr161;
bool mu__boolexpr162;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr166;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr169;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_blocked_location[mu_loc]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_blocked_location[mu_loc])); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_busy_crewmember[mu_crmem])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem][mu_loc]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc])); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (mu_blocked_location[mu_loc]) ; 
}
bool mu__boolexpr177;
bool mu__boolexpr178;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr182;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr183;
bool mu__boolexpr184;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr185;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_day_in_progress[mu_day]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
 		if (std::string(typeid(mu_blocked_location[mu_loc]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_blocked_location[mu_loc])); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_busy_crewmember[mu_crmem])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem][mu_loc]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc])); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_blocked_location[mu_loc]) ; 
}
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr198;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr199;
bool mu__boolexpr200;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr201;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_day_in_progress[mu_day]) ; 
}

 		if (std::string(typeid(mu_blocked_location[mu_loc]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_blocked_location[mu_loc]), 1)); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 1)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 
 		if (std::string(typeid(mu_performing_activity[mu_wrt][mu_crmem][mu_loc]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc]), 1)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_blocked_location[mu_loc]) ; 
}
bool mu__boolexpr209;
bool mu__boolexpr210;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
bool mu__boolexpr214;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_day_in_progress[mu_day]) ; 
}
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_busy_crewmember[mu_crmem]) ; 
}
bool mu__boolexpr217;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_day_in_progress[mu_day]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

    effs.push_back(&(mu_rem_time_today[mu_crmem]));  // decrease_rem_time_today_action_completing_activity( mu_rem_time_today[mu_crmem] ) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

    aeffs.push_back(&(mu_already_completed[mu_wrt][mu_crmem][mu_day])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

    inter_effs.insert(std::make_pair(&(mu_already_completed[mu_wrt][mu_crmem][mu_day]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 0)); //  mu_false 
    inter_effs.insert(std::make_pair(&(mu_blocked_location[mu_loc]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    aeffs.push_back(&(mu_already_completed[mu_wrt][mu_crmem][mu_day])); //  mu_true 
    aeffs.push_back(&(mu_rem_time_today[mu_crmem])); //  decrease_rem_time_today_action_completing_activity( mu_rem_time_today[mu_crmem] ) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 37;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    while (what_rule < 97 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
  if (!(mu_schedule_in_progress[mu_crmem])) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_day_in_progress[mu_day]) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = (mu_busy_crewmember[mu_crmem]) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_performing_activity[mu_wrt][mu_crmem][mu_loc]) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_blocked_location[mu_loc]) ; 
}
	      if (mu__boolexpr218) {
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
    r = what_rule - 37;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;
mu_performing_activity[mu_wrt][mu_crmem][mu_loc] = mu_false;
mu_busy_crewmember[mu_crmem] = mu_false;
mu_blocked_location[mu_loc] = mu_false;
mu_rem_time_today[mu_crmem] = decrease_rem_time_today_action_completing_activity( mu_rem_time_today[mu_crmem] );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

mu_already_completed[mu_wrt][mu_crmem][mu_day] = mu_true;
mu_rem_time_today[mu_crmem] = decrease_rem_time_today_action_completing_activity( mu_rem_time_today[mu_crmem] );


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return tsprintf("( completing_activity %s %s %s %s)", mu_wrt.Name(), mu_crmem.Name(), mu_loc.Name(), mu_day.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return tsprintf(" starting_activity , day:%s, loc:%s, crmem:%s, wrt:%s", mu_day.Name(), mu_loc.Name(), mu_crmem.Name(), mu_wrt.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (!(mu_blocked_location[mu_loc])) ; 
}
    return mu__boolexpr222;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (!(mu_blocked_location[mu_loc])) ; 
}
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr260;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
bool mu__boolexpr261;
bool mu__boolexpr262;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr263;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}

 		if (std::string(typeid(mu_can_perform_activity_all[mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_can_perform_activity_all[mu_crmem][mu_day])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (!(mu_blocked_location[mu_loc])) ; 
}
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
bool mu__boolexpr283;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr291;
bool mu__boolexpr292;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr293;
bool mu__boolexpr294;
bool mu__boolexpr295;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr294)) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr296;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
bool mu__boolexpr297;
bool mu__boolexpr298;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr299;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}

 	if (std::string(typeid(mu_rem_time_today[mu_crmem]).name()).compare("14mu_1_real_type") == 0){
			preconds.insert(std::make_pair(&(mu_rem_time_today[mu_crmem]), std::make_pair(0.000000e+00, 1))); 
	} 

    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
 	if (std::string(typeid(mu_rem_time_today[mu_crmem]).name()).compare("14mu_1_real_type") == 0)
			preconds.push_back(&(mu_rem_time_today[mu_crmem])); 
 		if (std::string(typeid(mu_can_perform_activity_all[mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_can_perform_activity_all[mu_crmem][mu_day])); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_day_in_progress[mu_day])); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_schedule_in_progress[mu_crmem])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (!(mu_blocked_location[mu_loc])) ; 
}
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr327;
bool mu__boolexpr328;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr332;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
bool mu__boolexpr333;
bool mu__boolexpr334;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr335;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}

 		if (std::string(typeid(mu_already_completed[mu_wrt][mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_already_completed[mu_wrt][mu_crmem][mu_day]), 0)); 
 		if (std::string(typeid(mu_blocked_location[mu_loc]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_blocked_location[mu_loc]), 0)); 
 		if (std::string(typeid(mu_busy_crewmember[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 0)); 
 		if (std::string(typeid(mu_can_perform_activity_all[mu_crmem][mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_can_perform_activity_all[mu_crmem][mu_day]), 1)); 
 		if (std::string(typeid(mu_day_in_progress[mu_day]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_day_in_progress[mu_day]), 1)); 
 		if (std::string(typeid(mu_schedule_in_progress[mu_crmem]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_schedule_in_progress[mu_crmem]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (!(mu_blocked_location[mu_loc])) ; 
}
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
bool mu__boolexpr355;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
bool mu__boolexpr363;
bool mu__boolexpr364;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
bool mu__boolexpr368;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
bool mu__boolexpr369;
bool mu__boolexpr370;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (mu_schedule_in_progress[mu_crmem]) ; 
}
bool mu__boolexpr371;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

    aeffs.push_back(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc])); //  mu_true 
    aeffs.push_back(&(mu_busy_crewmember[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_blocked_location[mu_loc])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

    inter_effs.insert(std::make_pair(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busy_crewmember[mu_crmem]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_blocked_location[mu_loc]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    aeffs.push_back(&(mu_performing_activity[mu_wrt][mu_crmem][mu_loc])); //  mu_true 
    aeffs.push_back(&(mu_busy_crewmember[mu_crmem])); //  mu_true 
    aeffs.push_back(&(mu_blocked_location[mu_loc])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 97;
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    while (what_rule < 157 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
  if (!(mu_day_in_progress[mu_day])) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = ((mu_rem_time_today[mu_crmem]) >= (0.000000e+00)) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = (mu_schedule_in_progress[mu_crmem]) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (mu_can_perform_activity_all[mu_crmem][mu_day]) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (!(mu_already_completed[mu_wrt][mu_crmem][mu_day])) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (!(mu_busy_crewmember[mu_crmem])) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (!(mu_blocked_location[mu_loc])) ; 
}
	      if (mu__boolexpr372) {
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
    r = what_rule - 97;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
mu_performing_activity[mu_wrt][mu_crmem][mu_loc] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_blocked_location[mu_loc] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

mu_performing_activity[mu_wrt][mu_crmem][mu_loc] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_blocked_location[mu_loc] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

mu_performing_activity[mu_wrt][mu_crmem][mu_loc] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_blocked_location[mu_loc] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

mu_performing_activity[mu_wrt][mu_crmem][mu_loc] = mu_true;
mu_busy_crewmember[mu_crmem] = mu_true;
mu_blocked_location[mu_loc] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_days mu_day;
    mu_day.value((r % 3) + 11);
    r = r / 3;
    static mu_1_location mu_loc;
    mu_loc.value((r % 1) + 10);
    r = r / 1;
    static mu_1_crew_members mu_crmem;
    mu_crmem.value((r % 4) + 1);
    r = r / 4;
    static mu_1_activity mu_wrt;
    mu_wrt.value((r % 5) + 5);
    r = r / 5;
    return tsprintf("( starting_activity %s %s %s %s)", mu_wrt.Name(), mu_crmem.Name(), mu_loc.Name(), mu_day.Name());
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
  RuleBase5 R5;
  RuleBase6 R6;
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
  if (what_rule>=34 && what_rule<37)
    { R4.NextRule(what_rule);
      if (what_rule<37) return; }
  if (what_rule>=37 && what_rule<97)
    { R5.NextRule(what_rule);
      if (what_rule<97) return; }
  if (what_rule>=97 && what_rule<157)
    { R6.NextRule(what_rule);
      if (what_rule<157) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=12) return R1.Condition(r-1);
  if (r>=13 && r<=24) return R2.Condition(r-13);
  if (r>=25 && r<=33) return R3.Condition(r-25);
  if (r>=34 && r<=36) return R4.Condition(r-34);
  if (r>=37 && r<=96) return R5.Condition(r-37);
  if (r>=97 && r<=156) return R6.Condition(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=12) return R1.bool_precond_array(r-1);
  if (r>=13 && r<=24) return R2.bool_precond_array(r-13);
  if (r>=25 && r<=33) return R3.bool_precond_array(r-25);
  if (r>=34 && r<=36) return R4.bool_precond_array(r-34);
  if (r>=37 && r<=96) return R5.bool_precond_array(r-37);
  if (r>=97 && r<=156) return R6.bool_precond_array(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=12) return R1.num_precond_array(r-1);
  if (r>=13 && r<=24) return R2.num_precond_array(r-13);
  if (r>=25 && r<=33) return R3.num_precond_array(r-25);
  if (r>=34 && r<=36) return R4.num_precond_array(r-34);
  if (r>=37 && r<=96) return R5.num_precond_array(r-37);
  if (r>=97 && r<=156) return R6.num_precond_array(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=12) return R1.all_precond_array(r-1);
  if (r>=13 && r<=24) return R2.all_precond_array(r-13);
  if (r>=25 && r<=33) return R3.all_precond_array(r-25);
  if (r>=34 && r<=36) return R4.all_precond_array(r-34);
  if (r>=37 && r<=96) return R5.all_precond_array(r-37);
  if (r>=97 && r<=156) return R6.all_precond_array(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=12) return R1.precond_bool_interference(r-1);
  if (r>=13 && r<=24) return R2.precond_bool_interference(r-13);
  if (r>=25 && r<=33) return R3.precond_bool_interference(r-25);
  if (r>=34 && r<=36) return R4.precond_bool_interference(r-34);
  if (r>=37 && r<=96) return R5.precond_bool_interference(r-37);
  if (r>=97 && r<=156) return R6.precond_bool_interference(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=12) return R1.temporal_constraints(r-1);
  if (r>=13 && r<=24) return R2.temporal_constraints(r-13);
  if (r>=25 && r<=33) return R3.temporal_constraints(r-25);
  if (r>=34 && r<=36) return R4.temporal_constraints(r-34);
  if (r>=37 && r<=96) return R5.temporal_constraints(r-37);
  if (r>=97 && r<=156) return R6.temporal_constraints(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=12) return R1.effects_bool_interference(r-1);
  if (r>=13 && r<=24) return R2.effects_bool_interference(r-13);
  if (r>=25 && r<=33) return R3.effects_bool_interference(r-25);
  if (r>=34 && r<=36) return R4.effects_bool_interference(r-34);
  if (r>=37 && r<=96) return R5.effects_bool_interference(r-37);
  if (r>=97 && r<=156) return R6.effects_bool_interference(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=12) return R1.effects_add_bool_array(r-1);
  if (r>=13 && r<=24) return R2.effects_add_bool_array(r-13);
  if (r>=25 && r<=33) return R3.effects_add_bool_array(r-25);
  if (r>=34 && r<=36) return R4.effects_add_bool_array(r-34);
  if (r>=37 && r<=96) return R5.effects_add_bool_array(r-37);
  if (r>=97 && r<=156) return R6.effects_add_bool_array(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=12) return R1.effects_num_array(r-1);
  if (r>=13 && r<=24) return R2.effects_num_array(r-13);
  if (r>=25 && r<=33) return R3.effects_num_array(r-25);
  if (r>=34 && r<=36) return R4.effects_num_array(r-34);
  if (r>=37 && r<=96) return R5.effects_num_array(r-37);
  if (r>=97 && r<=156) return R6.effects_num_array(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=12) return R1.effects_all_array(r-1);
  if (r>=13 && r<=24) return R2.effects_all_array(r-13);
  if (r>=25 && r<=33) return R3.effects_all_array(r-25);
  if (r>=34 && r<=36) return R4.effects_all_array(r-34);
  if (r>=37 && r<=96) return R5.effects_all_array(r-37);
  if (r>=97 && r<=156) return R6.effects_all_array(r-97);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code(r-25); return; } 
  if (r>=34 && r<=36) { R4.Code(r-34); return; } 
  if (r>=37 && r<=96) { R5.Code(r-37); return; } 
  if (r>=97 && r<=156) { R6.Code(r-97); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code_ff(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code_ff(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code_ff(r-25); return; } 
  if (r>=34 && r<=36) { R4.Code_ff(r-34); return; } 
  if (r>=37 && r<=96) { R5.Code_ff(r-37); return; } 
  if (r>=97 && r<=156) { R6.Code_ff(r-97); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code_numeric_ff_plus(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code_numeric_ff_plus(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code_numeric_ff_plus(r-25); return; } 
  if (r>=34 && r<=36) { R4.Code_numeric_ff_plus(r-34); return; } 
  if (r>=37 && r<=96) { R5.Code_numeric_ff_plus(r-37); return; } 
  if (r>=97 && r<=156) { R6.Code_numeric_ff_plus(r-97); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=12) { R1.Code_numeric_ff_minus(r-1); return; } 
  if (r>=13 && r<=24) { R2.Code_numeric_ff_minus(r-13); return; } 
  if (r>=25 && r<=33) { R3.Code_numeric_ff_minus(r-25); return; } 
  if (r>=34 && r<=36) { R4.Code_numeric_ff_minus(r-34); return; } 
  if (r>=37 && r<=96) { R5.Code_numeric_ff_minus(r-37); return; } 
  if (r>=97 && r<=156) { R6.Code_numeric_ff_minus(r-97); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=12) { return R1.get_rule_clock_started(r-1); } 
  if (r>=13 && r<=24) { return R2.get_rule_clock_started(r-13); } 
  if (r>=25 && r<=33) { return R3.get_rule_clock_started(r-25); } 
  if (r>=34 && r<=36) { return R4.get_rule_clock_started(r-34); } 
  if (r>=37 && r<=96) { return R5.get_rule_clock_started(r-37); } 
  if (r>=97 && r<=156) { return R6.get_rule_clock_started(r-97); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=12) { return R1.get_clocks(r-1); } 
  if (r>=13 && r<=24) { return R2.get_clocks(r-13); } 
  if (r>=25 && r<=33) { return R3.get_clocks(r-25); } 
  if (r>=34 && r<=36) { return R4.get_clocks(r-34); } 
  if (r>=37 && r<=96) { return R5.get_clocks(r-37); } 
  if (r>=97 && r<=156) { return R6.get_clocks(r-97); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=12) { return R1.Priority(); } 
  if (r>=13 && r<=24) { return R2.Priority(); } 
  if (r>=25 && r<=33) { return R3.Priority(); } 
  if (r>=34 && r<=36) { return R4.Priority(); } 
  if (r>=37 && r<=96) { return R5.Priority(); } 
  if (r>=97 && r<=156) { return R6.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=12) return R1.Name(r-1);
  if (r>=13 && r<=24) return R2.Name(r-13);
  if (r>=25 && r<=33) return R3.Name(r-25);
  if (r>=34 && r<=36) return R4.Name(r-34);
  if (r>=37 && r<=96) return R5.Name(r-37);
  if (r>=97 && r<=156) return R6.Name(r-97);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=12) return R1.Duration(r-1);
  if (r>=13 && r<=24) return R2.Duration(r-13);
  if (r>=25 && r<=33) return R3.Duration(r-25);
  if (r>=34 && r<=36) return R4.Duration(r-34);
  if (r>=37 && r<=96) return R5.Duration(r-37);
  if (r>=97 && r<=156) return R6.Duration(r-97);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=12) return R1.Weight(r-1);
  if (r>=13 && r<=24) return R2.Weight(r-13);
  if (r>=25 && r<=33) return R3.Weight(r-25);
  if (r>=34 && r<=36) return R4.Weight(r-34);
  if (r>=37 && r<=96) return R5.Weight(r-37);
  if (r>=97 && r<=156) return R6.Weight(r-97);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=12) return R1.PDDLName(r-1);
  if (r>=13 && r<=24) return R2.PDDLName(r-13);
  if (r>=25 && r<=33) return R3.PDDLName(r-25);
  if (r>=34 && r<=36) return R4.PDDLName(r-34);
  if (r>=37 && r<=96) return R5.PDDLName(r-37);
  if (r>=97 && r<=156) return R6.PDDLName(r-97);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=12) return R1.PDDLClass(r-1);
  if (r>=13 && r<=24) return R2.PDDLClass(r-13);
  if (r>=25 && r<=33) return R3.PDDLClass(r-25);
  if (r>=34 && r<=36) return R4.PDDLClass(r-34);
  if (r>=37 && r<=96) return R5.PDDLClass(r-37);
  if (r>=97 && r<=156) return R6.PDDLClass(r-97);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 157;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 157


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
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_can_perform_activity_all ( mu_crmem, mu_day, mu_false );
};
};
};
};
{
for(int mu_day1 = 11; mu_day1 <= 13; mu_day1++) {
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_in_order ( mu_day1, mu_day, mu_false );
};
};
};
};
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
mu_set_can_start_activity ( mu_crmem, mu_wrt, mu_false );
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_set_can_perform_activity ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
{
for(int mu_loc = 10; mu_loc <= 10; mu_loc++) {
mu_set_performing_activity ( mu_wrt, mu_crmem, mu_loc, mu_false );
};
};
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_set_paused_activity ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_loc = 10; mu_loc <= 10; mu_loc++) {
mu_set_blocked_location ( mu_loc, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_set_busy_crewmember ( mu_crmem, mu_false );
};
};
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_start_day ( mu_day, mu_false );
};
};
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_complete_day ( mu_day, mu_false );
};
};
{
for(int mu_act1 = 5; mu_act1 <= 9; mu_act1++) {
{
for(int mu_act2 = 5; mu_act2 <= 9; mu_act2++) {
mu_set_can_pause ( mu_act1, mu_act2, mu_false );
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_set_activity_in_progress ( mu_wrt, mu_crmem, mu_false );
};
};
};
};
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_day_in_progress ( mu_day, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_set_schedule_in_progress ( mu_crmem, mu_false );
};
};
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_create_schedule_for_member ( mu_crmem, mu_day, mu_false );
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_set_already_completed ( mu_wrt, mu_crmem, mu_day, mu_false );
};
};
};
};
};
};
mu_set_planner_in_progress ( mu_false );
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_time_spent_today[mu_crmem] = 0.000000e+00;
};
};
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_rem_time_today[mu_crmem] = 0.000000e+00;
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_crmem = 1; mu_crmem <= 4; mu_crmem++) {
mu_rem_time_for_activity[mu_wrt][mu_crmem] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_total_time_for_activity[mu_wrt][mu_day] = 0.000000e+00;
};
};
};
};
{
for(int mu_wrt = 5; mu_wrt <= 9; mu_wrt++) {
{
for(int mu_day = 11; mu_day <= 13; mu_day++) {
mu_total_time_for_activity_per_person[mu_wrt][mu_day] = 0.000000e+00;
};
};
};
};
mu_number_of_crew_members_with_task_complete = 0.000000e+00;
mu_in_order[mu_day0][mu_day1] = mu_true;
mu_in_order[mu_day1][mu_day2] = mu_true;
mu_complete_day[mu_day0] = mu_true;
mu_can_start_activity[mu_a][mu_work] = mu_true;
mu_can_start_activity[mu_b][mu_work] = mu_true;
mu_can_start_activity[mu_c][mu_work] = mu_true;
mu_can_start_activity[mu_d][mu_work] = mu_true;
mu_can_start_activity[mu_a][mu_exercise] = mu_true;
mu_can_start_activity[mu_b][mu_exercise] = mu_true;
mu_can_start_activity[mu_c][mu_exercise] = mu_true;
mu_can_start_activity[mu_d][mu_exercise] = mu_true;
mu_can_start_activity[mu_a][mu_sleep] = mu_true;
mu_can_start_activity[mu_b][mu_sleep] = mu_true;
mu_can_start_activity[mu_c][mu_sleep] = mu_true;
mu_can_start_activity[mu_d][mu_sleep] = mu_true;
mu_can_start_activity[mu_a][mu_nothing] = mu_true;
mu_can_start_activity[mu_b][mu_nothing] = mu_true;
mu_can_start_activity[mu_c][mu_nothing] = mu_true;
mu_can_start_activity[mu_d][mu_nothing] = mu_true;
mu_can_start_activity[mu_a][mu_breakfast] = mu_true;
mu_can_start_activity[mu_b][mu_breakfast] = mu_true;
mu_can_start_activity[mu_c][mu_breakfast] = mu_true;
mu_can_start_activity[mu_d][mu_breakfast] = mu_true;
mu_create_schedule_for_member[mu_a][mu_day1] = mu_true;
mu_create_schedule_for_member[mu_b][mu_day1] = mu_true;
mu_create_schedule_for_member[mu_c][mu_day1] = mu_true;
mu_create_schedule_for_member[mu_d][mu_day1] = mu_true;
mu_create_schedule_for_member[mu_a][mu_day2] = mu_true;
mu_create_schedule_for_member[mu_b][mu_day2] = mu_true;
mu_create_schedule_for_member[mu_c][mu_day2] = mu_true;
mu_create_schedule_for_member[mu_d][mu_day2] = mu_true;
mu_busy_crewmember[mu_a] = mu_false;
mu_busy_crewmember[mu_b] = mu_false;
mu_busy_crewmember[mu_c] = mu_false;
mu_busy_crewmember[mu_d] = mu_false;
mu_blocked_location[mu_loca] = mu_false;
mu_day_in_progress[mu_day1] = mu_false;
mu_day_in_progress[mu_day2] = mu_false;
mu_complete_day[mu_day1] = mu_false;
mu_complete_day[mu_day2] = mu_false;
mu_number_of_crew_members_with_task_complete = 0.000000e+00;
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
int mu__goal_378() // Goal "enjoy"
{
bool mu__boolexpr379;
bool mu__boolexpr380;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr379;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr381;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_complete_day[mu_day2]) ; 
}
bool mu__boolexpr382;
bool mu__boolexpr383;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (mu_complete_day[mu_day2]) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr384;
  if (!(mu_complete_day[mu_day1])) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_complete_day[mu_day2]) ; 
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

bool mu__condition_385() // Condition for Rule "enjoy"
{
  return mu__goal_378( );
}

bool mu__goal__00(){ return mu__condition_385(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_385, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_386() // Invariant "todo bien"
{
bool mu__boolexpr387;
  if (!(mu_all_event_true)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr387;
};

bool mu__condition_388() // Condition for Rule "todo bien"
{
  return mu__invariant_386( );
}

bool mu__goal__01(){ return mu__condition_388(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_388, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
already_completed:NoScalarset
create_schedule_for_member:NoScalarset
can_pause:NoScalarset
performing_activity:NoScalarset
can_perform_activity:NoScalarset
in_order:NoScalarset
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
can_perform_activity_all:NoScalarset
can_start_activity:NoScalarset
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
        mu_already_completed.MultisetSort();
        mu_create_schedule_for_member.MultisetSort();
        mu_can_pause.MultisetSort();
        mu_performing_activity.MultisetSort();
        mu_can_perform_activity.MultisetSort();
        mu_in_order.MultisetSort();
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
        mu_can_perform_activity_all.MultisetSort();
        mu_can_start_activity.MultisetSort();
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<5; j++)
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
              
              mu_already_completed.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_already_completed.MultisetSort();
              mu_create_schedule_for_member.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_create_schedule_for_member.MultisetSort();
              mu_can_pause.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_pause.MultisetSort();
              mu_performing_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_performing_activity.MultisetSort();
              mu_can_perform_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_perform_activity.MultisetSort();
              mu_in_order.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_in_order.MultisetSort();
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
              mu_can_perform_activity_all.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_perform_activity_all.MultisetSort();
              mu_can_start_activity.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_can_start_activity.MultisetSort();
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

          mu_already_completed.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_already_completed.MultisetSort();
          mu_create_schedule_for_member.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_create_schedule_for_member.MultisetSort();
          mu_can_pause.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_pause.MultisetSort();
          mu_performing_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_performing_activity.MultisetSort();
          mu_can_perform_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_perform_activity.MultisetSort();
          mu_in_order.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_in_order.MultisetSort();
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
          mu_can_perform_activity_all.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_perform_activity_all.MultisetSort();
          mu_can_start_activity.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_can_start_activity.MultisetSort();
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
              
              mu_already_completed.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_already_completed.MultisetSort();
              mu_create_schedule_for_member.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_create_schedule_for_member.MultisetSort();
              mu_can_pause.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_pause.MultisetSort();
              mu_performing_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_performing_activity.MultisetSort();
              mu_can_perform_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_perform_activity.MultisetSort();
              mu_in_order.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_in_order.MultisetSort();
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
              mu_can_perform_activity_all.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_perform_activity_all.MultisetSort();
              mu_can_start_activity.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_can_start_activity.MultisetSort();
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
      mu_already_completed.MultisetSort();
      mu_create_schedule_for_member.MultisetSort();
      mu_can_pause.MultisetSort();
      mu_performing_activity.MultisetSort();
      mu_can_perform_activity.MultisetSort();
      mu_in_order.MultisetSort();
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
      mu_can_perform_activity_all.MultisetSort();
      mu_can_start_activity.MultisetSort();
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
