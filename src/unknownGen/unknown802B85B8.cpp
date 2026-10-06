#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B841C();
void fn_802B8468();
void fn_802B8A24();
void fn_802E3D20();
void fn_802E40FC();
extern char lbl_8041D620[];
extern char lbl_8041D630[];
extern char lbl_804CF478[];
extern char lbl_804CF480[];
extern char lbl_804CF488[];
extern char lbl_804CF490[];
extern char lbl_80534730[];
extern void *lbl_80534734;
extern void *lbl_80534740;
extern void *lbl_8053571C;
void fn_802B85E0();
void *fn_802B864C();
void *fn_802B866C();
void fn_802B86B8();
void fn_802B86E0();
void *fn_802B8750();
void *fn_802B8770();
void fn_802B8780();
}
extern "C" {
void fn_802B85B8(){
 fn_80066188((int)fn_802B85E0);
}
void fn_802B85E0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534730,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B864C,(int)lbl_8041D620,28,(int)fn_802B8468,0,0,0);
}
void *fn_802B864C(){return fn_802B841C();}
void *fn_802B866C(){
 if(!lbl_80534734 || !(reinterpret_cast<unsigned int *>(lbl_80534734)[0x24/4]&4)) fn_802B86B8();
 return lbl_80534734;
}
void fn_802B86B8(){
 fn_80066188((int)fn_802B86E0);
}
void fn_802B86E0(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_80534734,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802B8750,(int)lbl_8041D630,24,0,(int)fn_802B8780,0,0);
}
void *fn_802B8750(){return fn_802B866C();}
void *fn_802B8770(){return lbl_8053571C;}
void fn_802B8780(){
 void *value0=lbl_80534734;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF478,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80037E48(value2);
 *reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+60)=value3;
 fn_800659C0(value0,lbl_804CF480,lbl_804CF488,lbl_804CF490,value1);
}
void *fn_802B8820(){
 if(!lbl_80534740 || !(reinterpret_cast<unsigned int *>(lbl_80534740)[0x24/4]&4)) fn_802B8A24();
 return lbl_80534740;
}
}
#pragma pop
