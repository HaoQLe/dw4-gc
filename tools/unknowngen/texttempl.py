"""Text templates keyed by representative function. {N} = Nth unique relocated symbol, {name} = function.
DECL[i] = declaration format for symbol i (None = already declared/arkCore)."""
T={}
T['fn_80021E10']=dict(decl=[None,'void %s();','extern void *%s;','void *%s(void *,void *);','void *%s(int,int,void *);','UnknownGenVirtual *%s(void *,int);'],sig='void *%s(void *);',src='''void *{name}(void *arg){
 UnknownGenVirtual *object;
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  {1}();
  object=reinterpret_cast<UnknownGenVirtual *>({3}({2},arg));
 }else{
  object=reinterpret_cast<UnknownGenVirtual *>({4}(0x34,0,arg));
  if(object) object={5}(object,1);
  object->slot2C();
  object->slot24(0);
 }
 return object;
}''')
T['fn_80021EB4']=dict(decl=[None,'void %s();','void *%s(void *,void *);','void *%s(int,int);','void *%s(void *,void *);'],sig='void *%s(void *,void *);',src='''void *{name}(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  {1}();
  return {2}(a,b);
 }
 void *object={3}(0x34,0);
 if(object) object={4}(object,a);
 return object;
}''')
T['fn_8002233C']=dict(decl=['extern void *%s;','void *%s(void *);','SDA','void %s(void *,void *,int);','void *%s(void *,void *);','void %s(void *,int);','SDA','SDA','SDA','void %s(void *,void *,void *,void *,void *);'],sig='void %s();',src='''void {name}(){
 void *meta={0};
 void *field={1}(meta);
 {3}(meta,{2},1);
 {5}({4}(meta,field),1);
 {9}(meta,{6},{7},{8},field);
}''')
T['fn_80024D24']=dict(decl=[None,'extern void *%s;','SDA','UnknownGenFactory *%s(void *,void *);','void *%s(void *,void *);','void *%s();','SDA','void %s(void *,void *,void *);',None,None],sig='void %s();',src='''void {name}(){
 void *meta={1};
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>({3}(meta,{2}));
 void *type={4}(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C={5}();
 field->unknown38=0;
 field->unknown1C={6};
 {7}(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}''')
T['dtor_80020BB8']=dict(decl=[None,'void %s(void *);'],sig='UnknownGenHolder *%s(UnknownGenHolder *,short);',src='''UnknownGenHolder *{name}(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) {1}(object);
 }
 return object;
}''')
# Immediate-parameterized templates: {@K} is the signed 16-bit immediate of member instruction K.
IT={}
IT['fn_80023A70']=dict(decl=['extern char %s[];','extern void *%s;','void *%s(void *,void *,void *,int);'],sig='void *%s();',src='''void *{name}(){
 char *data={0};
 if(!{1}) {1}={2}(data+{@8},data+{@9},data+{@10},{@11});
 return {1};
}''')
IT['fn_8003C9A0']=dict(decl=[None],sig='void %s(void *,UnknownGenValue *);',src='''void {name}(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+{@11});
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+{@11})=value;
}''')
IT['fn_802AAD5C']=dict(decl=['extern void *%s;','void *%s(void *);','extern char %s[];','void %s(void *,void *,int);','extern char %s[];','extern char %s[];','extern char %s[];','void %s(void *,void *,void *,void *,void *);'],sig='void %s();',src='''void {name}(){
 void *meta={0};
 void *field={1}(meta);
 {3}(meta,{2},{@15});
 {7}(meta,{4},{5},{6},field);
}''')
IT['fn_802AC6D0']=dict(decl=['extern void *%s;','extern char %s[];','extern char %s[];','extern char %s[];','void *%s(void *,void *,void *,int);'],sig='void *%s();',src='''void *{name}(){
 if(!{0}) {0}={4}({1},{2},{3},{@10});
 return {0};
}''')
PRELUDE='''struct UnknownGenField { void *unknown00; unsigned int unknown04; int unknown08[5]; void *unknown1C; int unknown20[6]; int unknown38; void *unknown3C; };
class UnknownGenFactory { public:
 virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14(); virtual void slot18(); virtual void slot1C(); virtual void slot20(); virtual void slot24(); virtual void slot28(); virtual void slot2C(); virtual void slot30(); virtual void slot34(); virtual void slot38(); virtual void slot3C(); virtual void slot40(); virtual void slot44(); virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual UnknownGenField *slot54(int); };
class UnknownGenVirtual {
public:
 virtual void slot08();
 virtual void slot0C();
 virtual void slot10();
 virtual void slot14();
 virtual void slot18();
 virtual void slot1C();
 virtual void slot20();
 virtual void slot24(int);
 virtual void slot28();
 virtual void slot2C();
};'''
