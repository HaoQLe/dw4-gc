#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80286D1C();
void fn_80286D68();
extern char lbl_80416C84[];
extern char lbl_804CB2BC[];
extern char lbl_80515D34[];
void fn_80286E04();
void *fn_80286E78();
}
extern "C" {
void fn_80286DDC(){
 fn_80066188((int)fn_80286E04);
}
void fn_80286E04(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515D34,(int)fn_8002907C,(int)fn_80024180,(int)fn_80286E78,(int)lbl_80416C84,20,(int)fn_80286D68,0,0,(int)lbl_804CB2BC);
}
void *fn_80286E78(){return fn_80286D1C();}
}
#pragma pop
