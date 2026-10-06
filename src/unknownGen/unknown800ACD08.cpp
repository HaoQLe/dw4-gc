#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800ACFEC();
extern char lbl_80477FB4[];
extern char lbl_8047A884[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DEDC[4];
extern char lbl_8055DEE0[4];
extern char lbl_8055DEE4[4];
extern char lbl_8055DEE8[4];
extern void *lbl_80562474;
extern void *lbl_8056247C;
void *fn_800ACD08();
void *fn_800ACD44();
void fn_800ACD9C();
void fn_800ACDC4();
void *fn_800ACE34();
void fn_800ACE54();
}
struct UnknownGenObject800ACD44_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800ACD08(){
 if(!lbl_80562474 || !(reinterpret_cast<unsigned int *>(lbl_80562474)[0x24/4]&4)) fn_800ACD9C();
 return lbl_80562474;
}
void *fn_800ACD44(){
 UnknownGenObject800ACD44_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A884;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ACD9C(){
 fn_80066188((int)fn_800ACDC4);
}
void fn_800ACDC4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562474,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ACE34,(int)lbl_80477FB4,16,(int)fn_800ACD44,(int)fn_800ACE54,0,0);
}
void *fn_800ACE34(){return fn_800ACD08();}
void fn_800ACE54(){
 void *value0=lbl_80562474;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DEDC,1);
 fn_800659C0(value0,lbl_8055DEE0,lbl_8055DEE4,lbl_8055DEE8,value1);
}
void *fn_800ACEBC(void *object){
 fn_800ACFEC();
 return fn_8006546C(lbl_8056247C,object);
}
void *fn_800ACEF4(){
 if(!lbl_8056247C || !(reinterpret_cast<unsigned int *>(lbl_8056247C)[0x24/4]&4)) fn_800ACFEC();
 return lbl_8056247C;
}
}
#pragma pop
