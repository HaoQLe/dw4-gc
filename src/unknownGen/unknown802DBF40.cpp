#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DBE80();
void fn_802DBECC();
extern char lbl_804205C0[];
extern char lbl_804D240C[];
extern char lbl_80535438[];
void fn_802DBF68();
void *fn_802DBFDC();
}
extern "C" {
void fn_802DBF40(){
 fn_80066188((int)fn_802DBF68);
}
void fn_802DBF68(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535438,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DBFDC,(int)lbl_804205C0,20,(int)fn_802DBECC,0,0,(int)lbl_804D240C);
}
void *fn_802DBFDC(){return fn_802DBE80();}
}
#pragma pop
