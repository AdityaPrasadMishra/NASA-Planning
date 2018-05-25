domain: file "nwmodel.pddl"
problem: file "nwmodelquest.pddl"
message: " Time Discretisation = 1.000000"
message: " Digits for representing the integer part of a real =  5.000000"
message: " Digits for representing the fractional part of a real =  4"
type
	 real_type: real(9,4);
	integer: -1000..1000;

	 TIME_type: real(12,7);

	crew_members : Enum {a,b};
	activity : Enum {work,exercise};
	location : Enum {loca};
	days : Enum {day0,day1,day2};

const 
	 T:1.000000;


var 
	all_event_true: boolean;
	 h_n: integer;
	 g_n: integer;
	 f_n: integer;
	 TIME[pddlname:"upmurphi_global_clock";]:TIME_type;
	rem_time_for_activity[pddlname:"rem_time_for_activity";] : Array [activity] of Array [crew_members] of  real_type;
	rem_time_today[pddlname:"rem_time_today";] : Array [crew_members] of Array [days] of  real_type;
	time_spent_today[pddlname:"time_spent_today";] : Array [crew_members] of  real_type;
	total_time_for_activity[pddlname:"total_time_for_activity";] : Array [activity] of Array [days] of  real_type;
	total_time_for_activity_per_person[pddlname:"total_time_for_activity_per_person";] : Array [activity] of Array [days] of  real_type;
	active_day_clock_started[pddlname:"active_day";] : Array [days] of Array [days] of  boolean ;
	active_day_clock [pddlname:"active_day";] : Array [days] of Array [days] of  TIME_type ;
	active_activity_clock_started[pddlname:"active_activity";] : Array [days] of Array [activity] of Array [crew_members] of  boolean ;
	active_activity_clock [pddlname:"active_activity";] : Array [days] of Array [activity] of Array [crew_members] of  TIME_type ;


	can_perform_activity_all[pddlname: "can_perform_activity_all";] : Array [crew_members] of Array [days] of  boolean;
	in_order[pddlname: "in_order";] : Array [days] of Array [days] of  boolean;
	can_start_activity[pddlname: "can_start_activity";] : Array [crew_members] of Array [activity] of  boolean;
	can_perform_activity[pddlname: "can_perform_activity";] : Array [activity] of Array [crew_members] of  boolean;
	performing_activity[pddlname: "performing_activity";] : Array [activity] of Array [crew_members] of  boolean;
	paused_activity[pddlname: "paused_activity";] : Array [activity] of Array [crew_members] of  boolean;
	blocked_location[pddlname: "blocked_location";] : Array [location] of  boolean;
	busy_crewmember[pddlname: "busy_crewmember";] : Array [crew_members] of  boolean;
	start_day[pddlname: "start_day";] : Array [days] of  boolean;
	complete_day[pddlname: "complete_day";] : Array [days] of  boolean;
	can_pause[pddlname: "can_pause";] : Array [activity] of Array [activity] of  boolean;
	activity_in_progress[pddlname: "activity_in_progress";] : Array [activity] of Array [crew_members] of  boolean;
	day_in_progress[pddlname: "day_in_progress";] : Array [days] of  boolean;
	schedule_in_progress[pddlname: "schedule_in_progress";] : Array [crew_members] of  boolean;
	create_schedule_for_member[pddlname: "create_schedule_for_member";] : Array [crew_members] of Array [days] of  boolean;
	already_completed[pddlname: "already_completed";] : Array [activity] of Array [crew_members] of Array [days] of  boolean;
	planner_in_progress[pddlname: "planner_in_progress";] : Array [crew_members] of Array [activity] of Array [days] of  boolean;


-- External function declaration 

externfun ext_assignment(value : real_type) : real_type;
externfun decrease_rem_time_today_duraction_end_active_activity(rem_time_today : real_type ; total_time_for_activity_per_person : real_type ; ): real_type "nwmodel.h" ;
procedure set_can_perform_activity_all( crmem : crew_members ; day : days ;  value : boolean);
BEGIN
	can_perform_activity_all[crmem][day] := value;
END;

function get_can_perform_activity_all( crmem : crew_members ; day : days): boolean;
BEGIN
	return 	can_perform_activity_all[crmem][day];
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

procedure set_performing_activity( wrt : activity ; crmem : crew_members ;  value : boolean);
BEGIN
	performing_activity[wrt][crmem] := value;
END;

function get_performing_activity( wrt : activity ; crmem : crew_members): boolean;
BEGIN
	return 	performing_activity[wrt][crmem];
END;

procedure set_paused_activity( wrt : activity ; crmem : crew_members ;  value : boolean);
BEGIN
	paused_activity[wrt][crmem] := value;
END;

function get_paused_activity( wrt : activity ; crmem : crew_members): boolean;
BEGIN
	return 	paused_activity[wrt][crmem];
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

procedure set_already_completed( wrt : activity ; crmem : crew_members ; day : days ;  value : boolean);
BEGIN
	already_completed[wrt][crmem][day] := value;
END;

function get_already_completed( wrt : activity ; crmem : crew_members ; day : days): boolean;
BEGIN
	return 	already_completed[wrt][crmem][day];
END;

procedure set_planner_in_progress( crmem : crew_members ; wrt : activity ; day : days ;  value : boolean);
BEGIN
	planner_in_progress[crmem][wrt][day] := value;
END;

function get_planner_in_progress( crmem : crew_members ; wrt : activity ; day : days): boolean;
BEGIN
	return 	planner_in_progress[crmem][wrt][day];
END;






procedure process_active_day( day : days; day1 : days);
BEGIN
	 IF (active_day_clock_started[day][day1]) THEN 
		 active_day_clock[day][day1]:= active_day_clock[day][day1] + T ;
	 ENDIF;

END;
procedure process_active_activity( day : days; wrt : activity; crmem : crew_members);
BEGIN
	 IF (active_activity_clock_started[day][wrt][crmem]) THEN 
		 active_activity_clock[day][wrt][crmem]:= active_activity_clock[day][wrt][crmem] + T ;
	 ENDIF;

END;
function event_active_day_failure( day : days; day1 : days) : boolean; 
BEGIN
	 IF (active_day_clock_started[day][day1])& !((true)    & (!(complete_day[day])) & (in_order[day1][day]) & (complete_day[day1]) & (day_in_progress[day])    ) THEN 
		 active_day_clock[day][day1]:= active_day_clock[day][day1]+ T ;
		 all_event_true := false ;
		 return true; 
 	 ELSE return false;
	 ENDIF;

END;
function event_active_activity_failure( day : days; wrt : activity; crmem : crew_members) : boolean; 
BEGIN
	 IF (active_activity_clock_started[day][wrt][crmem])& !((true)     & (day_in_progress[day]) & (performing_activity[wrt][crmem]) & ((( rem_time_today[crmem][day]) > (0.00000))) & (busy_crewmember[crmem]) & (!(already_completed[wrt][crmem][day]))    ) THEN 
		 active_activity_clock[day][wrt][crmem]:= active_activity_clock[day][wrt][crmem]+ T ;
		 all_event_true := false ;
		 return true; 
 	 ELSE return false;
	 ENDIF;

END;


procedure event_check();
 var -- local vars declaration 
   event_triggered : boolean;
   event_active_day_failure_triggered :  Array [days] of  Array [days] of  boolean;
   event_active_activity_failure_triggered :  Array [days] of  Array [activity] of  Array [crew_members] of  boolean;
BEGIN
 event_triggered := true;
   for day : days do 
     for day1 : days do 
           event_active_day_failure_triggered[day][day1] := false;
           END;END; -- close for
   for day : days do 
     for wrt : activity do 
       for crmem : crew_members do 
               event_active_activity_failure_triggered[day][wrt][crmem] := false;
               END;END;END; -- close for
while (event_triggered) do 
 event_triggered := false;
       for day : days do 
         for day1 : days do 
           if(! event_active_day_failure_triggered[day][day1]) then 
           event_active_day_failure_triggered[day][day1] := event_active_day_failure(day,day1);
           event_triggered := event_triggered | event_active_day_failure_triggered[day][day1]; 
           endif;
END;END; -- close for
         for day : days do 
           for wrt : activity do 
             for crmem : crew_members do 
               if(! event_active_activity_failure_triggered[day][wrt][crmem]) then 
               event_active_activity_failure_triggered[day][wrt][crmem] := event_active_activity_failure(day,wrt,crmem);
               event_triggered := event_triggered | event_active_activity_failure_triggered[day][wrt][crmem]; 
               endif;
END;END;END; -- close for
END; -- close while loop 
END;



 function DAs_violate_duration() : boolean ; 
 var -- local vars declaration 
 DA_duration_violated : boolean;
 BEGIN
 DA_duration_violated := false;
for day : days do 
  for day1 : days do 
if (active_day_clock[day][day1] > 24.0000) then return true;
 endif;
END; -- close for 
END; -- close for 
    for day : days do 
      for wrt : activity do 
        for crmem : crew_members do 
if (active_activity_clock[day][wrt][crmem] > total_time_for_activity_per_person[wrt][day]) then return true;
 endif;
END; -- close for 
END; -- close for 
END; -- close for 

 return DA_duration_violated; 
 END; -- close begin


 function DAs_ongoing_in_goal_state() : boolean ; 
 var -- local vars declaration 
 DA_still_ongoing : boolean;
 BEGIN
 DA_still_ongoing := false;
for day : days do 
  for day1 : days do 
if (	active_day_clock_started[day][day1] = true) then return true;
 endif;
END; -- close for 
END; -- close for 
    for day : days do 
      for wrt : activity do 
        for crmem : crew_members do 
if (	active_activity_clock_started[day][wrt][crmem] = true) then return true;
 endif;
END; -- close for 
END; -- close for 
END; -- close for 

 return DA_still_ongoing; 
 END; -- close begin


procedure apply_continuous_change();
 var -- local vars declaration 
   process_updated : boolean;
 end_while : boolean;   process_active_day_enabled :  Array [days] of  Array [days] of  boolean;
   process_active_activity_enabled :  Array [days] of  Array [activity] of  Array [crew_members] of  boolean;
BEGIN
 process_updated := false; end_while := false;
   for day : days do 
     for day1 : days do 
           process_active_day_enabled[day][day1] := false;
           END;END; -- close for
   for day : days do 
     for wrt : activity do 
       for crmem : crew_members do 
               process_active_activity_enabled[day][wrt][crmem] := false;
               END;END;END; -- close for
while (!end_while) do 
        for day : days do 
         for day1 : days do 
           if ((true)            & active_day_clock_started[day][day1] &  !process_active_day_enabled[day][day1]) then
           process_updated := true;
           process_active_day(day,day1);
           process_active_day_enabled[day][day1] := true;
           endif;
END;END; -- close for
         for day : days do 
           for wrt : activity do 
             for crmem : crew_members do 
               if ((true)              & active_activity_clock_started[day][wrt][crmem] &  !process_active_activity_enabled[day][wrt][crmem]) then
               process_updated := true;
               process_active_activity(day,wrt,crmem);
               process_active_activity_enabled[day][wrt][crmem] := true;
               endif;
END;END;END; -- close for
IF (!process_updated) then
	 end_while:=true;
 else process_updated:=false;
endif;END; -- close while loop 
END;



ruleset day:days do 
 ruleset day1:days do 
 durative_start rule " active_day_start " 
( !active_day_clock_started[day][day1]) & (!(day_in_progress[day])) & (!(complete_day[day])) & (in_order[day1][day]) & (complete_day[day1])         & all_event_true ==> 
pddlname: " active_day"; 
BEGIN
active_day_clock_started[day][day1]:= true;
day_in_progress[day]:= true; 

END; 
END; 
END; 



ruleset day:days do 
 ruleset day1:days do 
 durative_end rule " active_day_end " 
( active_day_clock_started[day][day1]) & (( active_day_clock[day][day1]) = (24.0000))         & (!(complete_day[day])) & (in_order[day1][day]) & (complete_day[day1]) & (day_in_progress[day]) & ((active_day_clock[day][day1])  > 0.0) & all_event_true ==> 
pddlname: " active_day"; 
BEGIN
active_day_clock_started[day][day1]:= false;
active_day_clock[day][day1]:= 0.0;
complete_day[day]:= true; 
day_in_progress[day]:= false; 

END; 
END; 
END; 




ruleset day:days do 
 ruleset wrt:activity do 
 ruleset crmem:crew_members do 
 durative_start rule " active_activity_start " 
( !active_activity_clock_started[day][wrt][crmem]) & (day_in_progress[day]) & (!(performing_activity[wrt][crmem])) & ((( rem_time_today[crmem][day]) > (0.00000))) & (!(busy_crewmember[crmem])) & (!(already_completed[wrt][crmem][day]))          & all_event_true ==> 
pddlname: " active_activity"; 
BEGIN
active_activity_clock_started[day][wrt][crmem]:= true;
busy_crewmember[crmem]:= true; 
performing_activity[wrt][crmem]:= true; 

END; 
END; 
END; 
END; 



ruleset day:days do 
 ruleset wrt:activity do 
 ruleset crmem:crew_members do 
 durative_end rule " active_activity_end " 
( active_activity_clock_started[day][wrt][crmem]) & (( active_activity_clock[day][wrt][crmem]) = (total_time_for_activity_per_person[wrt][day]))           & (performing_activity[wrt][crmem]) & ((( rem_time_today[crmem][day]) > (0.00000))) & (busy_crewmember[crmem]) & (!(already_completed[wrt][crmem][day])) & ((active_activity_clock[day][wrt][crmem])  > 0.0) & all_event_true ==> 
pddlname: " active_activity"; 
BEGIN
active_activity_clock_started[day][wrt][crmem]:= false;
active_activity_clock[day][wrt][crmem]:= 0.0;
busy_crewmember[crmem]:= false; 
already_completed[wrt][crmem][day]:= true; 
rem_time_today[crmem][day] := decrease_rem_time_today_duraction_end_active_activity(rem_time_today[crmem][day] , total_time_for_activity_per_person[wrt][day]  );
performing_activity[wrt][crmem]:= false; 

END; 
END; 
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
  for day : days do 
    set_can_perform_activity_all(crmem,day, false);
END; END;  -- close for
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
       set_performing_activity(wrt,crmem, false);
END; END;  -- close for
   for wrt : activity do 
     for crmem : crew_members do 
       set_paused_activity(wrt,crmem, false);
END; END;  -- close for
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
   for wrt : activity do 
     for crmem : crew_members do 
       for day : days do 
         set_already_completed(wrt,crmem,day, false);
END; END; END;  -- close for
   for crmem : crew_members do 
     for wrt : activity do 
       for day : days do 
         set_planner_in_progress(crmem,wrt,day, false);
END; END; END;  -- close for
   for crmem : crew_members do 
     time_spent_today[crmem] := 0.0 ;
END;  -- close for
   for crmem : crew_members do 
     for day : days do 
       rem_time_today[crmem][day] := 0.0 ;
END; END;  -- close for
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
in_order[day0][day1]:= true; 
in_order[day1][day2]:= true; 
complete_day[day0]:= true; 
rem_time_today[a][day1] := 24.0000;
rem_time_today[b][day1] := 24.0000;
rem_time_today[a][day2] := 24.0000;
rem_time_today[b][day2] := 24.0000;
total_time_for_activity_per_person[work][day1] := 12.0000;
total_time_for_activity_per_person[exercise][day1] := 12.0000;
total_time_for_activity_per_person[work][day2] := 12.0000;
total_time_for_activity_per_person[exercise][day2] := 12.0000;

-- durative action "active_activity" clock initialization
 for day : days do 
   for wrt : activity do 
     for crmem : crew_members do 
       active_activity_clock_started[day][wrt][crmem]:= false;
      active_activity_clock[day][wrt][crmem]:= 0.0;
END; END; END; -- for ends

-- durative action "active_day" clock initialization
 for day : days do 
   for day1 : days do 
     active_day_clock_started[day][day1]:= false;
    active_day_clock[day][day1]:= 0.0;
END; END; -- for ends

all_event_true := true;
g_n := 0;
h_n := 0;
f_n := 0;
END; -- close startstate

goal "enjoy" 
 (complete_day[day1]) & (complete_day[day2]) & (already_completed[work][a][day1]) & (already_completed[work][a][day2]) & (already_completed[work][b][day1]) & (already_completed[work][b][day2]) & ((( rem_time_today[a][day1]) <= (0.00000))) & ((( rem_time_today[b][day1]) <= (0.00000))) & ((( rem_time_today[a][day2]) <= (0.00000))) & ((( rem_time_today[b][day2]) <= (0.00000)))& !DAs_ongoing_in_goal_state(); 

invariant "todo bien" 
 all_event_true & !DAs_violate_duration();
metric: minimize;


