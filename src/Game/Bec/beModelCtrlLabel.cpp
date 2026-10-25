// beModelCtrl: labels and Lua hit scripts (0x8030B014..0x8030BB3C).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Sets a label: the sequence it belongs to and its name, with no offset yet (-1). The first label creates the
// three lists.
void fn_8030B014(beModelCtrl *self, beBaseInfoRam *, beModelCtrlInfoWork *work, const char *sequence, const char *label)
{
    igStringRefList *sequences = work->_labelSeqList;
    igStringRefList *names = work->_labelNameList;
    igIntList *offsets = work->_labelOffsetList;
    if (!work->_labelSeqList) {
        Ref<igStringRefList> strings(0, Ref<igStringRefList>::adopt);
        Ref<igIntList> ints(0, Ref<igIntList>::adopt);
        void *pool = poolFor(self, lbl_8056225C);
        strings.releaseHeld();
        strings._object = igStringRefList_create(pool);
        setRef(work->_labelSeqList, strings._object);
        sequences = strings;
        pool = poolFor(self, lbl_8056225C);
        strings.releaseHeld();
        strings._object = igStringRefList_create(pool);
        setRef(work->_labelNameList, strings._object);
        names = strings;
        pool = poolFor(self, lbl_8056225C);
        ints.releaseHeld();
        ints._object = igIntList_create(pool);
        setRef(work->_labelOffsetList, ints._object);
        offsets = ints;
    }
    int index;
    {
        POOLED_REF(key, sequence);
        index = fn_8004270C(sequences, &key, 0);
    }
    if (index != -1) {
        {
            POOLED_REF(value, sequence);
            setStringAt(sequences, index, value);
        }
        {
            POOLED_REF(value, label);
            setStringAt(names, index, value);
        }
        setValueAt<int>(offsets, index, lbl_804DEBA4[0]);
    } else {
        fn_8002080C(sequences, igStringRef(pooledOrNull(sequence)));
        fn_8002080C(names, igStringRef(pooledOrNull(label)));
        appendInt(offsets, lbl_804DEBA8[0]);
    }
}

// A LABELCTRL command: sets a label of a sequence.
bool fn_8030B6B0(beModelCtrl *self, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlLABELCTRL *command)
{
    fn_8030B014(self, ram, work, command->_seqName, nameOrEmpty(command));
    return true;
}

// Runs a model's Lua hit script "<script>_<info name>.lua" with the hit context set; the script may change the
// model's HP through the context.
void fn_8030B6EC(beModelCtrl *self, beBaseInfoRam *ram, const char *script, const char *kind, const char *infoName, int a, int b, const char *c, int d, int e)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, kONE);
    beModelCtrlInfoWork *work = data->_work;
    ModelLuaContext *context = &lbl_80535914;
    context->ram = ram;
    context->ramNo = ram->_ramNo;
    context->matrix = data->_node->_m;
    context->maxHp = work->_mHp->_data;
    int hp = work->_hp->_data;
    context->hp = hp;
    context->recNo = work->_recNo;
    context->infoName = infoName;
    context->argument1C = a;
    context->argument20 = b;
    context->argument24 = c;
    context->argument28 = d;
    context->argument2C = e;
    context->isSet = true;
    context->kind = kind;
    char file[36];
    sprintf(file, kLuaFileFormat, script, infoName);
    fn_80301FA4(self->_luaManager, file, 0);
    if (hp == work->_hp->_data) work->_hp->_data = context->hp;
}

// A LUACALL command: BHit, WHit and FHit name the scripts for body, wall and floor hits; any other mode (or none)
// runs the script now, with the mode as its kind.
bool fn_8030B8A4(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlLUACALL *command)
{
    const beModelCtrlPool &mc = MC;
    bool run = false;
    if (!command->_modeName) run = true;
    else if (strcmp(command->_modeName, mc.BHit) == 0) setString(work->_luaBHit, nameOrEmpty(command));
    else if (strcmp(command->_modeName, mc.WHit) == 0) setString(work->_luaWHit, nameOrEmpty(command));
    else if (strcmp(command->_modeName, mc.FHit) == 0) setString(work->_luaFHit, nameOrEmpty(command));
    else run = true;
    if (run) {
        const char *infoName = nameOrEmpty(info);
        const char *mode = command->_modeName;
        fn_8030B6EC(self, ram, nameOrEmpty(command), mode, infoName, 0, 0, 0, 0, 0);
    }
    return true;
}

}
