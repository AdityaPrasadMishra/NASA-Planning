Type of Times -> start, Postsleep, Latemorning, Afternoon, Lateafternoon, Presleep, Night
Type of activities -> Food, Experimentactivity, Communicationactivity, Loadingunloadingactivity, Exercise 
Location -> LocA, LocB, LocC, LocD, LocE, LocF
Crew -> A, B, C, D
food -breakfast, lunch, dinner, 
experiment - exp1, 
excercise - t1exercise,
loadunload - loading,unloading


(inordertime  ?time1 - times, ?time2 - times)
(currenttime ?time - times)
(lasttime ?time - times)
(activity ?type - activitytype)
(inorderfood ?food - foods)
(inordercrew ?crew1 - crew ?crew2 - crew)
(timeforfood ?time - times ?






actions ->

(StartingDay)
(StartingPeriodOfDay ?time - times)

(Havingfood ?time - times ?food - foods ?loc - location)

(doingexperimentwithonecrewmember ?time - times  ?experiment - experiments ?crew1 - crew ?loc - location)
(doingexperimentwithtwocrewmember ?time - times ?experiment - experiments ?crew1 - crew ?crew2 - crew ?loc - location)
(doingexperimentwiththreecrewmember ?time - times ?experiment - experiments ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - location)

(doingcommunicationactivitywithonecrewmember ?time - times ?experiment - experiments ?crew1 - crew ?loc - location)
(doingcommunicationactivitywithtwocrewmember ?time - times ?experiment - experiments ?crew1 - crew ?crew2 - crew ?loc - location)
(doingcommunicationactivitywiththreecrewmember ?time - times ?experiment - experiments ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - location)

(doingloadingunloadingactivitywithonecrewmember ?time - times ?experiment - experiments ?crew1 - crew ?loc - location)
(doingloadingunloadingactivitywithtwocrewmember ?time - times ?experiment - experiments ?crew1 - crew ?crew2 - crew ?loc - location)
(doingloadingunloadingactivitywiththreecrewmember ?time - times ?experiment - experiments ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - location)

(sleeping ?time - times ?loc - location)

(EndingPeriodOfDay ?time - times)
(EndingDay)


