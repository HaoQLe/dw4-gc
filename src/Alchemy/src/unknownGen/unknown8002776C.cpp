#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8002760C();
void fn_800276DC();
void fn_80027704();
void *fn_80027C70();
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8006C4B8(void *);
extern char lbl_80463F08[];
extern char lbl_80471384[];
extern char lbl_80471478[];
extern char lbl_80471914[];
extern char lbl_80476630[];
extern char lbl_8055D188[8];
extern char lbl_8055D190[4];
extern char lbl_8055D194[4];
extern char lbl_8055D198[4];
extern char lbl_8055D19C[4];
extern char lbl_8055D1A0[8];
extern char lbl_8055D1A8[8];
extern void *lbl_80561694;
extern void *lbl_80561698;
extern void *lbl_8056169C;
extern void *lbl_805616A0;
extern void *lbl_805616A8;
extern void *lbl_805621F4;
void *fn_80027854();
void *fn_80027890();
void fn_80027934();
void fn_8002795C();
void *fn_800279D0();
void *fn_800279F0();
void fn_800279F8();
void *fn_80027B80();
void fn_80027BBC();
void fn_80027BE4();
void *fn_80027C50();
}
struct UnknownGenRoot80027890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80027890(){fn_8006C4B8(this);}
};
struct UnknownGenObject80027890_0 : UnknownGenRoot80027890 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80027890_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80027890_1 : UnknownGenObject80027890_0 {
 inline ~UnknownGenObject80027890_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject80027890_2 : UnknownGenObject80027890_1 {
 inline ~UnknownGenObject80027890_2(){unknown00=lbl_80476630;}
};
struct UnknownGenObject80027890 : UnknownGenObject80027890_2 {
 char unknown10[48];
 inline ~UnknownGenObject80027890(){unknown00=lbl_80471478;}
};
extern "C" {
void *fn_8002776C(){return fn_8002760C();}
void fn_8002778C(){
 if(!lbl_80561698){
  void *object=(lbl_80561698=fn_8006546C(lbl_80561694,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561698));
   reinterpret_cast<short *>(lbl_80561698)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561698);
  }
 }
}
void *fn_80027824(){
 if(!lbl_80561698){
  fn_800276DC();
 }
 return lbl_80561698;
}
void *fn_80027854(){
 if(!lbl_8056169C || !(reinterpret_cast<unsigned int *>(lbl_8056169C)[0x24/4]&4)) fn_80027934();
 return lbl_8056169C;
}
void *fn_80027890(){
 UnknownGenObject80027890 object;
 object.unknown00=lbl_80471478;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80027934(){
 fn_80066188((int)fn_8002795C);
}
void fn_8002795C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056169C,(int)fn_80027704,(int)fn_800279F0,(int)fn_800279D0,(int)lbl_80463F08,60,(int)fn_80027890,(int)fn_800279F8,0,(int)lbl_8055D188);
}
void *fn_800279D0(){return fn_80027854();}
void *fn_800279F0(){return lbl_80561694;}
void fn_800279F8(){
 void *meta=lbl_8056169C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D190,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D194,lbl_8055D198,lbl_8055D19C,field);
}
void fn_80027A74(){
 if(!lbl_805616A0){
  void *object=(lbl_805616A0=fn_8006546C(lbl_8056169C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805616A0));
   reinterpret_cast<short *>(lbl_805616A0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805616A0);
  }
 }
}
void *fn_80027B0C(void *object){
 fn_80027BBC();
 return fn_8006546C(lbl_805616A8,object);
}
void *fn_80027B44(){
 if(!lbl_805616A8) lbl_805616A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616A8;
}
void *fn_80027B80(){
 if(!lbl_805616A8 || !(reinterpret_cast<unsigned int *>(lbl_805616A8)[0x24/4]&4)) fn_80027BBC();
 return lbl_805616A8;
}
void fn_80027BBC(){
 fn_80066188((int)fn_80027BE4);
}
void fn_80027BE4(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805616A8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80027C50,(int)lbl_8055D1A8,12,0,(int)fn_80027C70,0,(int)lbl_8055D1A0);
}
void *fn_80027C50(){return fn_80027B80();}
}
#pragma pop
