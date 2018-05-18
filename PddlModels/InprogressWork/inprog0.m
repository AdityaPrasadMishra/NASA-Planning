domain: file "inprog0.pddl"
problem: file "inproquestg0.pddl"
message: " Time Discretisation = 1.000000"
message: " Digits for representing the integer part of a real =  5.000000"
message: " Digits for representing the fractional part of a real =  4"
type
	 real_type: real(9,4);
	integer: -1000..1000;

	 TIME_type: real(12,7);

	crew_members : Enum {a};
	activity : Enum {work,exercise,sleep,nothing,breakfast,lunch,dinner};
	location : Enum {loca,locb,locc,locd,loce,locf,locg};
	days : Enum {day0,day1,day2};

const 
	 T:1.000000;

	number_of_crew_members : 1.00000;

var 
	all_event_true: boolean;
	 h_n: integer;
	 g_n: integer;
	 f_n: integer;
	 TIME[pddlname:"upmurphi_global_clock";]:TIME_type;
	number_of_crew_members_with_task_complete[pddlname:"number_of_crew_members_with_task_complete";] :  real_type;
	rem_time_for_activity[pddlname:"rem_time_for_activity";] : Array [activity] of Array [crew_members] of  real_type;
	rem_time_today[pddlname:"rem_time_today";] : Array [crew_members] of  real_type;
	time_spent_today[pddlname:"time_spent_today";] : Array [crew_members] of  real_type;
	total_time_for_activity[pddlname:"total_time_for_activity";] : Array [activity] of Array [days] of  real_type;
	total_time_for_activity_per_person[pddlname:"total_time_for_activity_per_person";] : Array [activity] of Array [days] of  real_type;


	can_perform_activity_all[pddlname: "can_perform_activity_all";] : Array [crew_members] of  boolean;
	in_order[pddlname: "in_order";] : Array [days] of Array [days] of  boolean;
	can_start_activity[pddlname: "can_start_activity";] : Array [crew_members] of Array [activity] of  boolean;
	can_perform_activity[pddlname: "can_perform_activity";] : Array [activity] of Array [crew_members] of  boolean;
	performing_activity[pddlname: "performing_activity";] : Array [activity] of Array [crew_members] of Array [location] of  boolean;
	paused_activity[pddlname: "paused_activity";] : Array [activity] of Array [crew_members] of Array [location] of  boolean;
	blocked_location[pddlname: "blocked_location";] : Array [location] of  boolean;
	busy_crewmember[pddlname: "busy_crewmember";] : Array [crew_members] of  boolean;
	start_day[pddlname: "start_day";] : Array [days] of  boolean;
	complete_day[pddlname: "complete_day";] : Array [days] of  boolean;
	can_pause[pddlname: "can_pause";] : Array [activity] of Array [activity] of  boolean;
	activity_in_progress[pddlname: "activity_in_progress";] : Array [activity] of Array [crew_members] of  boolean;
	day_in_progress[pddlname: "day_in_progress";] : Array [days] of  boolean;
	schedule_in_progress[pddlname: "schedule_in_progress";] : Array [crew_members] of  boolean;
	create_schedule_for_member[pddlname: "create_schedule_for_member";] : Array [crew_members] of Array [days] of  boolean;
	planner_in_progress[pddlname: "planner_in_progress";] :  boolean;


-- External function declaration 

externfun ext_assignment(value : real_type) : real_type;
externfun assign_number_of_crew_members_with_task_complete_action_completing_day(): real_type "inprog0.h" ;
externfun assign_rem_time_today_action_starting_day_for_crewmember(): real_type ;
externfun assign_time_spent_today_action_starting_day_for_crewmember(): real_type ;
externfun increase_number_of_crew_members_with_task_complete_action_completing_all_activity(number_of_crew_members_with_task_complete : real_type ; ): real_type ;
procedure set_can_perform_activity_all( crmem : crew_members ;  value : boolean);
BEGIN
	can_perform_activity_all[crmem] := value;
END;

function get_can_perform_activity_all( crmem : crew_members): boolean;
BEGIN
	return 	can_perform_activity_all[crmem];
END;

procedure set_in_order( day1 : days ; day : days ;  value : boolean);
BEGIN
	in_order[day1][day] := value;
END;

function get_in_order( day1 : days ; day : days): boolean;
BEGIN
	return 	in_order[day1][day];
END;

procedure set_can_start_activity( crmem : crew_members ; wrt : activity ;  value : boolean);
BEGIN
	can_start_activity[crmem][wrt] := value;
END;

function get_can_start_activity( crmem : crew_members ; wrt : activity): boolean;
BEGIN
	return 	can_start_activity[crmem][wrt];
END;

procedure set_can_perform_activity( wrt : activity ; crmem : crew_members ;  value : boolean);
BEGIN
	can_perform_activity[wrt][crmem] := value;
END;

function get_can_perform_activity( wrt : activity ; crmem : crew_members): boolean;
BEGIN
	return 	can_perform_activity[wrt][crmem];
END;

procedure set_performing_activity( wrt : activity ; crmem : crew_members ; loc : location ;  value : boolean);
BEGIN
	performing_activity[wrt][crmem][loc] := value;
END;

function get_performing_activity( wrt : activity ; crmem : crew_members ; loc : location): boolean;
BEGIN
	return 	performing_activity[wrt][crmem][loc];
END;

procedure set_paused_activity( wrt : activity ; crmem : crew_members ; loc : location ;  value : boolean);
BEGIN
	paused_activity[wrt][crmem][loc] := value;
END;

function get_paused_activity( wrt : activity ; crmem : crew_members ; loc : location): boolean;
BEGIN
	return 	paused_activity[wrt][crmem][loc];
END;

procedure set_blocked_location( loc : location ;  value : boolean);
BEGIN
	blocked_location[loc] := value;
END;

function get_blocked_location( loc : location): boolean;
BEGIN
	return 	blocked_location[loc];
END;

procedure set_busy_crewmember( crmem : crew_members ;  value : boolean);
BEGIN
	busy_crewmember[crmem] := value;
END;

function get_busy_crewmember( crmem : crew_members): boolean;
BEGIN
	return 	busy_crewmember[crmem];
END;

procedure set_start_day( day : days ;  value : boolean);
BEGIN
	start_day[day] := value;
END;

function get_start_day( day : days): boolean;
BEGIN
	return 	start_day[day];
END;

procedure set_complete_day( day : days ;  value : boolean);
BEGIN
	complete_day[day] := value;
END;

function get_complete_day( day : days): boolean;
BEGIN
	return 	complete_day[day];
END;

procedure set_can_pause( act1 : activity ; act2 : activity ;  value : boolean);
BEGIN
	can_pause[act1][act2] := value;
END;

function get_can_pause( act1 : activity ; act2 : activity): boolean;
BEGIN
	return 	can_pause[act1][act2];
END;

procedure set_activity_in_progress( wrt : activity ; crmem : crew_members ;  value : boolean);
BEGIN
	activity_in_progress[wrt][crmem] := value;
END;

function get_activity_in_progress( wrt : activity ; crmem : crew_members): boolean;
BEGIN
	return 	activity_in_progress[wrt][crmem];
END;

procedure set_day_in_progress( day : days ;  value : boolean);
BEGIN
	day_in_progress[day] := value;
END;

function get_day_in_progress( day : days): boolean;
BEGIN
	return 	day_in_progress[day];
END;

procedure set_schedule_in_progress( crmem : crew_members ;  value : boolean);
BEGIN
	schedule_in_progress[crmem] := value;
END;

function get_schedule_in_progress( crmem : crew_members): boolean;
BEGIN
	return 	schedule_in_progress[crmem];
END;

procedure set_create_schedule_for_member( crmem : crew_members ; day : days ;  value : boolean);
BEGIN
	create_schedule_for_member[crmem][day] := value;
END;

function get_create_schedule_for_member( crmem : crew_members ; day : days): boolean;
BEGIN
	return 	create_schedule_for_member[crmem][day];
END;

procedure set_planner_in_progress(  value : boolean);
BEGIN
	planner_in_progress := value;
END;

function get_planner_in_progress(): boolean;
BEGIN
	return 	planner_in_progress;
END;










procedure event_check();
 var -- local vars declaration 
   event_triggered : boolean;
BEGIN
 event_triggered := true;
while (event_triggered) do 
 event_triggered := false;
END; -- close while loop 
END;



 function DAs_violate_duration() : boolean ; 
 var -- local vars declaration 
 DA_duration_violated : boolean;
 BEGIN
 DA_duration_violated := false;

 return DA_duration_violated; 
 END; -- close begin


 function DAs_ongoing_in_goal_state() : boolean ; 
 var -- local vars declaration 
 DA_still_ongoing : boolean;
 BEGIN
 DA_still_ongoing := false;

 return DA_still_ongoing; 
 END; -- close begin


procedure apply_continuous_change();
 var -- local vars declaration 
   process_updated : boolean;
 end_while : boolean;BEGIN
 process_updated := false; end_while := false;
while (!end_while) do 
 IF (!process_updated) then
	 end_while:=true;
 else process_updated:=false;
endif;END; -- close while loop 
END;

ruleset day:days do 
 action rule " completing_day " 
((( number_of_crew_members_with_task_complete) = (number_of_crew_members))) & (day_in_progress[day]) ==> 
pddlname: " completing_day"; 
BEGIN
complete_day[day]:= true; 
day_in_progress[day]:= false; 
number_of_crew_members_with_task_complete := assign_number_of_crew_members_with_task_complete_action_completing_day();

END; 
END;

ruleset day:days do 
 ruleset day1:days do 
 action rule " starting_day " 
(!(day_in_progress[day])) & (!(complete_day[day])) & (complete_day[day1]) & (in_order[day1][day]) ==> 
pddlname: " starting_day"; 
BEGIN
day_in_progress[day]:= true; 

END; 
END; 
END;

ruleset crmem:crew_members do 
 ruleset day:days do 
 action rule " starting_day_for_crewmember " 
(day_in_progress[day]) & (!(planner_in_progress)) & (create_schedule_for_member[crmem][day]) ==> 
pddlname: " starting_day_for_crewmember"; 
BEGIN
planner_in_progress:= true; 
schedule_in_progress[crmem]:= true; 
create_schedule_for_member[crmem][day]:= false; 
rem_time_today[crmem] := assign_rem_time_today_action_starting_day_for_crewmember();
time_spent_today[crmem] := assign_time_spent_today_action_starting_day_for_crewmember();

END; 
END; 
END;

ruleset crmem:crew_members do 
 action rule " completing_all_activity " 
(schedule_in_progress[crmem]) & (planner_in_progress) & ((( rem_time_today[crmem]) = (0.00000))) ==> 
pddlname: " completing_all_activity"; 
BEGIN
schedule_in_progress[crmem]:= false; 
planner_in_progress:= false; 
number_of_crew_members_with_task_complete := increase_number_of_crew_members_with_task_complete_action_completing_all_activity(number_of_crew_members_with_task_complete  );

END; 
END;

clock rule " time passing " 
 (true) ==> 
BEGIN 
 	TIME := TIME + T;

 	 event_check();
	 apply_continuous_change();
	 event_check();
END;


startstate "start" 
BEGIN 
TIME := 0.0;
for crmem : crew_members do 
  set_can_perform_activity_all(crmem, false);
END;  -- close for
   for day1 : days do 
     for day : days do 
       set_in_order(day1,day, false);
END; END;  -- close for
   for crmem : crew_members do 
     for wrt : activity do 
       set_can_start_activity(crmem,wrt, false);
END; END;  -- close for
   for wrt : activity do 
     for crmem : crew_members do 
       set_can_perform_activity(wrt,crmem, false);
END; END;  -- close for
   for wrt : activity do 
     for crmem : crew_members do 
       for loc : location do 
         set_performing_activity(wrt,crmem,loc, false);
END; END; END;  -- close for
   for wrt : activity do 
     for crmem : crew_members do 
       for loc : location do 
         set_paused_activity(wrt,crmem,loc, false);
END; END; END;  -- close for
   for loc : location do 
     set_blocked_location(loc, false);
END;  -- close for
   for crmem : crew_members do 
     set_busy_crewmember(crmem, false);
END;  -- close for
   for day : days do 
     set_start_day(day, false);
END;  -- close for
   for day : days do 
     set_complete_day(day, false);
END;  -- close for
   for act1 : activity do 
     for act2 : activity do 
       set_can_pause(act1,act2, false);
END; END;  -- close for
   for wrt : activity do 
     for crmem : crew_members do 
       set_activity_in_progress(wrt,crmem, false);
END; END;  -- close for
   for day : days do 
     set_day_in_progress(day, false);
END;  -- close for
   for crmem : crew_members do 
     set_schedule_in_progress(crmem, false);
END;  -- close for
   for crmem : crew_members do 
     for day : days do 
       set_create_schedule_for_member(crmem,day, false);
END; END;  -- close for
   set_planner_in_progress(false);

   for crmem : crew_members do 
     time_spent_today[crmem] := 0.0 ;
END;  -- close for
   for crmem : crew_members do 
     rem_time_today[crmem] := 0.0 ;
END;  -- close for
   for wrt : activity do 
     for crmem : crew_members do 
       rem_time_for_activity[wrt][crmem] := 0.0 ;
END; END;  -- close for
   for wrt : activity do 
     for day : days do 
       total_time_for_activity[wrt][day] := 0.0 ;
END; END;  -- close for
   for wrt : activity do 
     for day : days do 
       total_time_for_activity_per_person[wrt][day] := 0.0 ;
END; END;  -- close for

   number_of_crew_members_with_task_complete := 0.0 ;

in_order[day0][day1]:= true; 
in_order[day1][day2]:= true; 
complete_day[day0]:= true; 
create_schedule_for_member[a][day1]:= true; 
create_schedule_for_member[a][day2]:= true; 
day_in_progress[day1]:= false; 
day_in_progress[day2]:= false; 
complete_day[day1]:= false; 
complete_day[day2]:= false; 
number_of_crew_members_with_task_complete := 0.00000;
rem_time_today[a] := 0.00000;
time_spent_today[a] := 0.00000;
all_event_true := true;
g_n := 0;
h_n := 0;
f_n := 0;
END; -- close startstate

goal "enjoy" 
 (complete_day[day1]) & (complete_day[day2]) & (!(day_in_progress[day1])) & (!(day_in_progress[day2]))& !DAs_ongoing_in_goal_state(); 

invariant "todo bien" 
 all_event_true & !DAs_violate_duration();
metric: minimize;


