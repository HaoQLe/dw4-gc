#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80037D28();
void fn_8003FF90(void *);
void *fn_8003FFCC(void *,void *);
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
extern char lbl_80471914[];
extern char lbl_80473F24[];
extern void *lbl_80561E1C;
void fn_80037D00();
}
struct UnknownGenRoot80037C78 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80037C78(){fn_8003FF90(this);}
};
struct UnknownGenObject80037C78_0 : UnknownGenRoot80037C78 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80037C78_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80037C78 : UnknownGenObject80037C78_0 {
 char unknown10[48];
 inline ~UnknownGenObject80037C78(){unknown00=lbl_80473F24;}
};
extern "C" {
void *fn_80037BC0(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  fn_80037D00();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_8003FFCC(object,a);
 return object;
}
void *fn_80037C3C(){
 if(!lbl_80561E1C || !(reinterpret_cast<unsigned int *>(lbl_80561E1C)[0x24/4]&4)) fn_80037D00();
 return lbl_80561E1C;
}
void *fn_80037C78(){
 UnknownGenObject80037C78 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80037D00(){
 fn_80066188((int)fn_80037D28);
}
}
#pragma pop
