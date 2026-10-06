#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80029E64(void *);
void fn_8002A6D8();
void *fn_8003B898();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80465CE0[];
extern char lbl_80471914[];
extern char lbl_804725BC[];
extern char lbl_8055D45C[8];
extern void *lbl_80561B20;
extern void *lbl_80561B24;
extern void *lbl_805621F4;
void *fn_8002FA04();
void *fn_8002FA40();
void fn_8002FACC();
void fn_8002FAF4();
void *fn_8002FB60();
}
struct UnknownGenRoot8002FA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002FA40(){fn_800638E0(this);}
};
struct UnknownGenObject8002FA40_0 : UnknownGenRoot8002FA40 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002FA40_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002FA40 : UnknownGenObject8002FA40_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002FA40(){unknown00=lbl_804725BC;}
};
extern "C" {
void *fn_8002F970(){return fn_8003B898();}
void *fn_8002F990(void *object){
 fn_8002FACC();
 return fn_8006546C(lbl_80561B20,object);
}
void *fn_8002F9C8(){
 if(!lbl_80561B20) lbl_80561B20=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561B20;
}
void *fn_8002FA04(){
 if(!lbl_80561B20 || !(reinterpret_cast<unsigned int *>(lbl_80561B20)[0x24/4]&4)) fn_8002FACC();
 return lbl_80561B20;
}
void *fn_8002FA40(){
 UnknownGenObject8002FA40 object;
 object.unknown00=lbl_804725BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002FACC(){
 fn_80066188((int)fn_8002FAF4);
}
void fn_8002FAF4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B20,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8002FB60,(int)lbl_80465CE0,52,(int)fn_8002FA40,0,0,(int)lbl_8055D45C);
}
void *fn_8002FB60(){return fn_8002FA04();}
void fn_8002FB80(){
 if(!lbl_80561B24){
  void *object=(lbl_80561B24=fn_8006546C(lbl_80561B20,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561B24));
   reinterpret_cast<short *>(lbl_80561B24)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561B24);
  }
 }
}
}
#pragma pop
