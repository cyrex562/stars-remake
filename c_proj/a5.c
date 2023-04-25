
void __cdecl16far FUN_1008_400c(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int16 *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_SI;
  undefined4 *puVar10;
  undefined2 unaff_DI;
  undefined4 *puVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined in_stack_00000000 [12];

  PTR_DAT_10a8_0002_10a8_0038 = (undefined *)&DAT_10a8_0002;
  PTR_DAT_10a8_0000_10a8_0040._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_0040 | 8;
  PTR_DAT_10a8_0002_10a8_0034 = (undefined *)0x0;
  PTR_DAT_10a8_0001_10a8_0036 = (undefined *)&DAT_10a8_0001;
  PTR_DAT_10a8_0001_10a8_003c = (undefined *)&DAT_10a8_0001;
  _PTR_DAT_10a8_0000_10a8_0030 = 0x8cef49;
  FUN_1018_50de(0x143,(char *)&PTR_DAT_10a8_0000_10a8_0044);
  puVar11 = (undefined4 *)0x885e;
  puVar10 = (undefined4 *)&DAT_10a8_446e;
  for (iVar7 = 0x1d; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = puVar11;
    puVar11 = puVar11 + 1;
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar5 = *puVar2;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
  puVar11 = (undefined4 *)&DAT_10a8_88d4;
  puVar10 = (undefined4 *)((int)s__d_______years_10a8_0c41 + 6);
  for (iVar7 = 0x1d; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = puVar11;
    puVar11 = puVar11 + 1;
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar5 = *puVar2;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
  _DAT_10a8_88da = _DAT_10a8_88da & 0x300 | 0x200 | _DAT_10a8_88da & 0xff | 0x2000;
  uVar8 = 0xffff;
  pcVar12 = pcRam10a84864;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar3 = pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar3 != '\0');
  uVar8 = ~uVar8;
  puVar13 = (undefined2 *)(pcVar12 + -uVar8);
  puVar14 = (undefined2 *)0x892a;
  for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar4 = *puVar1;
  }
  for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
    puVar4 = puVar14;
    puVar14 = (undefined2 *)((int)puVar14 + 1);
    puVar1 = puVar13;
    puVar13 = (undefined2 *)((int)puVar13 + 1);
    *(undefined *)puVar4 = *(undefined *)puVar1;
  }
  PTR_DAT_10a8_0000_10a8_07aa = (undefined *)0x0;
  piVar6 = GETSYSTEMMETRICS((int16 *)0x0,
                            (int16)CONCAT124(in_stack_00000000,CONCAT22(unaff_DI,unaff_SI)));
  if ((int)piVar6 < 0x500) {
    if ((int)piVar6 < 0x400) {
      PTR_DAT_10a8_0000_10a8_08b2 = (undefined *)(uint)(799 < (int)piVar6);
    }
    else {
      PTR_DAT_10a8_0000_10a8_08b2 = (undefined *)&DAT_10a8_0002;
    }
  }
  else {
    PTR_DAT_10a8_0000_10a8_08b2 = (undefined *)&DAT_10a8_0003;
  }
  FUN_1018_49f0(0x2d2);
  iVar7 = 1;
  do {
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x3eb10a8,(LPCSTR)0x85dc10a8,
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
    FUN_10a0_0826();
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x3f210a8,(LPCSTR)0x85dc10a8,
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
    FUN_10a0_0826();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  FUN_1040_4304();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void __cdecl16far FUN_1008_4138(undefined2 param_1)

{
  uint *puVar1;
  int16 *piVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int16 *piVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  undefined *puVar19;
  int *piVar20;
  undefined *puVar21;
  uint *puVar22;
  void *unaff_SI;
  undefined4 *puVar23;
  undefined2 unaff_DI;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  byte *pbVar27;
  undefined2 uVar28;
  undefined2 unaff_SS;
  bool bVar29;
  bool bVar30;
  void *pvVar31;
  char **in_stack_0000f65a;
  int16 *in_stack_0000f65c;
  HINSTANCE16 in_stack_0000f65e;
  int16 *in_stack_0000f660;
  HINSTANCE16 in_stack_0000f662;
  int in_stack_0000f664;
  HWND16 in_stack_0000f666;
  undefined *in_stack_0000f668;
  HINSTANCE16 in_stack_0000f66a;
  LPVOID in_stack_0000f66c;
  undefined4 local_234;
  undefined4 local_230;
  undefined local_134 [208];
  undefined4 local_64 [4];
  undefined2 local_52;
  undefined local_30 [32];
  int local_10;
  int local_e;
  undefined *local_c;
  int16 *local_a;
  undefined *local_8;
  undefined4 local_6;

  local_10 = (int)((((ulong)DAT_10a8_0a47 & 0xffff04) << 8) >> 10);
  DAT_10a8_0a47 = DAT_10a8_0a47 | 4;
  puVar24 = local_64;
  puVar23 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_0030;
  for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar8 = puVar24;
    puVar24 = puVar24 + 1;
    puVar4 = puVar23;
    puVar23 = puVar23 + 1;
    *puVar8 = *puVar4;
  }
  PTR_DAT_10a8_0000_10a8_59a6 = &stack0xf66c;
  PTR_DAT_10a8_0000_10a8_574c = local_134;
  local_e = 0;
  PTR_DAT_10a8_0000_10a8_884c = (undefined *)0x0;
  puVar24 = (undefined4 *)&DAT_10a8_82c2;
  for (iVar15 = 4; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar4 = puVar24;
    puVar24 = puVar24 + 1;
    *puVar4 = 0;
  }
  DAT_10a8_82c2 = 1;
  DAT_10a8_82c3 = 0x23;
  DAT_10a8_82c4 = 0x27;
  PTR_DAT_10a8_0000_10a8_82c5._0_1_ = 0x8b;
  local_6 = MAKEPROCINSTANCE((void *)CONCAT13(0x2f,CONCAT12(0x18,PTR_DAT_10a8_0000_10a8_839a)),
                             (int)s_backup_d_10a8_1001 + 7);
  local_a = DIALOGBOX((int16 *)local_6,(HINSTANCE16)((ulong)local_6 >> 0x10),
                      (LPCSTR)CONCAT22(0xd1,param_1),0,PTR_DAT_10a8_0000_10a8_839a);
  FREEPROCINSTANCE(local_6);
  if (local_a == (int16 *)&DAT_10a8_0002) {
LAB_1008_4c2c:
    puVar23 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_0030;
    puVar24 = local_64;
    for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar8 = puVar23;
      puVar23 = puVar23 + 1;
      puVar4 = puVar24;
      puVar24 = puVar24 + 1;
      *puVar8 = *puVar4;
    }
    goto LAB_1008_4c3f;
  }
  if (local_a == (int16 *)&PTR_DAT_10a8_0000_10a8_00d4) {
    FUN_1090_86cc(0);
    goto LAB_1008_4c3f;
  }
  if ((local_a != (int16 *)0x430) && (local_a != (int16 *)((int)&PTR_DAT_10a8_0000_10a8_00d2 + 1)))
  goto LAB_1008_46a0;
  puVar24 = (undefined4 *)&DAT_10a8_82c2;
  for (iVar15 = 4; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar4 = puVar24;
    puVar24 = puVar24 + 1;
    *puVar4 = 0;
  }
  if (PTR_DAT_10a8_0000_10a8_0042 < (undefined *)0x7) {
    DAT_10a8_82c2 = (char)PTR_DAT_10a8_0000_10a8_0042 << 2 | 1;
  }
  else {
    DAT_10a8_82c2 = 2;
    *PTR_DAT_10a8_0000_10a8_574c = 0;
    PTR_DAT_10a8_0000_10a8_884c = (undefined *)&DAT_10a8_0001;
  }
  puVar19 = PTR_DAT_10a8_0001_10a8_0036;
  if (PTR_DAT_10a8_0002_10a8_0034 == (undefined *)0x0) {
    if ((PTR_DAT_10a8_0001_10a8_0036 == (undefined *)&DAT_10a8_0003) &&
       (iVar15 = FUN_1018_4a4a(3), iVar15 == 0)) {
      PTR_DAT_10a8_0002_10a8_0038 = puVar19;
    }
    else {
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)&DAT_10a8_0002;
    }
  }
  else if (PTR_DAT_10a8_0002_10a8_0034 == (undefined *)&DAT_10a8_0001) {
    if ((PTR_DAT_10a8_0001_10a8_0036 == (undefined *)&DAT_10a8_0003) &&
       (iVar15 = FUN_1018_4a4a(4), iVar15 == 0)) {
LAB_1008_428f:
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0x6;
    }
    else if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(6 - (int)puVar19), iVar15 != 0)) {
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)&PTR_LOOP_10a8_0004;
    }
    else {
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)((int)&PTR_LOOP_10a8_0004 + 1);
    }
  }
  else if (PTR_DAT_10a8_0002_10a8_0034 == (undefined *)&DAT_10a8_0002) {
    if ((PTR_DAT_10a8_0001_10a8_0036 == (undefined *)&DAT_10a8_0003) &&
       (iVar15 = FUN_1018_4a4a(10), iVar15 == 0)) {
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0xa;
    }
    else {
      if ((puVar19 == (undefined *)&DAT_10a8_0003) && (iVar15 = FUN_1018_4a4a(10), iVar15 == 0))
      goto LAB_1008_428f;
      if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(7 - (int)puVar19), iVar15 != 0)) {
        if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(7 - (int)puVar19), iVar15 != 0)) {
          PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0x8;
        }
        else {
          PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0x7;
        }
      }
      else {
        PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0x9;
      }
    }
  }
  else if (PTR_DAT_10a8_0002_10a8_0034 == (undefined *)&DAT_10a8_0003) {
    if ((PTR_DAT_10a8_0001_10a8_0036 == (undefined *)&DAT_10a8_0003) &&
       (iVar15 = FUN_1018_4a4a(10), iVar15 == 0)) {
      iVar15 = FUN_1018_4a4a(2);
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)(iVar15 + 0xe);
    }
    else {
      if ((puVar19 == (undefined *)&DAT_10a8_0003) && (iVar15 = FUN_1018_4a4a(10), iVar15 == 0)) {
        iVar15 = FUN_1018_4a4a(2);
        iVar15 = iVar15 + -10;
        goto LAB_1008_4382;
      }
      if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(7 - (int)puVar19), iVar15 != 0)) {
        if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(7 - (int)puVar19), iVar15 != 0)) {
          PTR_DAT_10a8_0002_10a8_0038 = (undefined *)&PTR_DAT_10a8_0000_10a8_000c;
        }
        else {
          PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0xb;
        }
      }
      else {
        PTR_DAT_10a8_0002_10a8_0038 = (undefined *)((int)&PTR_DAT_10a8_0000_10a8_000c + 1);
      }
    }
  }
  else if (PTR_DAT_10a8_0002_10a8_0034 == (undefined *)&PTR_LOOP_10a8_0004) {
    if ((PTR_DAT_10a8_0001_10a8_0036 == (undefined *)&DAT_10a8_0003) &&
       (iVar15 = FUN_1018_4a4a(10), iVar15 == 0)) {
      iVar15 = FUN_1018_4a4a(3);
      iVar15 = iVar15 + -0xd;
LAB_1008_4382:
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)-iVar15;
    }
    else if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(9 - (int)puVar19), iVar15 != 0)) {
      if (((int)puVar19 < 2) || (iVar15 = FUN_1018_4a4a(7 - (int)puVar19), iVar15 != 0)) {
        PTR_DAT_10a8_0002_10a8_0038 = (undefined *)&PTR_DAT_10a8_0000_10a8_0010;
      }
      else {
        PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0xf;
      }
    }
    else {
      PTR_DAT_10a8_0002_10a8_0038 = (undefined *)0xe;
    }
  }
  local_8 = (undefined *)0x1;
  if (puVar19 == (undefined *)0x0) {
    if (1 < (int)PTR_DAT_10a8_0002_10a8_0038) {
      in_stack_0000f668 = PTR_DAT_10a8_0002_10a8_0038 + 1;
      in_stack_0000f66a = (int)in_stack_0000f668 / 3 + 1;
      iVar15 = 1;
      local_c = puVar19;
      do {
        if (iVar15 < (int)in_stack_0000f66a) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 7;
        }
        else if (iVar15 < ((int)in_stack_0000f668 * 2) / 3 + 1) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 3;
        }
        else {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0xb;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)PTR_DAT_10a8_0002_10a8_0038);
    }
  }
  else if (puVar19 == (undefined *)&DAT_10a8_0001) {
    if (1 < (int)PTR_DAT_10a8_0002_10a8_0038) {
      in_stack_0000f666 = ((int)(PTR_DAT_10a8_0002_10a8_0038 + 5) * 2) / 7 + 1;
      iVar15 = 1;
      local_c = puVar19;
      do {
        if (iVar15 < (int)in_stack_0000f666) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x27;
        }
        else if (iVar15 < ((int)PTR_DAT_10a8_0002_10a8_0038 * 4 + 2) / 7 + 1) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x23;
        }
        else if (iVar15 < ((int)PTR_DAT_10a8_0002_10a8_0038 * 6) / 7 + 1) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x2b;
        }
        else {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x8b;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)PTR_DAT_10a8_0002_10a8_0038);
    }
  }
  else if (puVar19 == (undefined *)&DAT_10a8_0002) {
    if (1 < (int)PTR_DAT_10a8_0002_10a8_0038) {
      in_stack_0000f664 =
           ((int)(PTR_DAT_10a8_0002_10a8_0038 + 2 +
                 ((int)(PTR_DAT_10a8_0002_10a8_0038 + 2) >> 0xf & 3)) >> 2) + 1;
      iVar15 = 1;
      local_c = puVar19;
      do {
        if (iVar15 < in_stack_0000f664) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x43;
        }
        else if (iVar15 < (int)PTR_DAT_10a8_0002_10a8_0038 / 2 + 1) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x47;
        }
        else if (iVar15 < in_stack_0000f664) {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x4b;
        }
        else {
          *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x8b;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)PTR_DAT_10a8_0002_10a8_0038);
    }
  }
  else if ((puVar19 == (undefined *)&DAT_10a8_0003) && (1 < (int)PTR_DAT_10a8_0002_10a8_0038)) {
    in_stack_0000f66a = (int)(PTR_DAT_10a8_0002_10a8_0038 + 1) / 3 + 1;
    iVar15 = 1;
    local_c = puVar19;
    do {
      if (iVar15 < (int)in_stack_0000f66a) {
        *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 99;
      }
      else if (iVar15 < ((int)PTR_DAT_10a8_0002_10a8_0038 * 7 + 4) / 0xc + 1) {
        *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x67;
      }
      else if (iVar15 < ((int)PTR_DAT_10a8_0002_10a8_0038 * 5) / 6 + 1) {
        *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x6b;
      }
      else {
        *(undefined *)((int)&DAT_10a8_82c2 + iVar15) = 0x8b;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  iVar15 = 1;
  if (1 < (int)(PTR_DAT_10a8_0002_10a8_0038 + -1)) {
    local_c = puVar19;
    do {
      iVar11 = FUN_1018_4a4a((int)(PTR_DAT_10a8_0002_10a8_0038 + (-1 - iVar15)));
      bVar10 = *(byte *)((int)&DAT_10a8_82c2 + iVar15);
      local_6 = (void *)((ulong)local_6 & 0xffffff | (ulong)bVar10 << 0x18);
      *(undefined *)((int)&DAT_10a8_82c2 + iVar15) =
           *(undefined *)((int)&DAT_10a8_82c3 + iVar11 + iVar15);
      *(byte *)((int)&DAT_10a8_82c3 + iVar11 + iVar15) = bVar10;
      iVar15 = iVar15 + 1;
      puVar19 = local_c;
    } while (iVar15 < (int)(PTR_DAT_10a8_0002_10a8_0038 + -1));
  }
  PTR_DAT_10a8_0001_10a8_0036 = (undefined *)&DAT_10a8_0001;
  if ((int)puVar19 < 2) {
    PTR_DAT_10a8_0001_10a8_003c = (undefined *)&DAT_10a8_0002;
  }
  else {
    PTR_DAT_10a8_0001_10a8_003c = (undefined *)&DAT_10a8_0003;
  }
  PTR_DAT_10a8_0000_10a8_0040._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_0040 & 0xfc;
  PTR_DAT_10a8_0000_10a8_0040 =
       (undefined *)
       ((uint)(puVar19 == (undefined *)&DAT_10a8_0003) << 4 ^
       (byte)PTR_DAT_10a8_0000_10a8_0040 & 0xf);
  FUN_1018_50de((uint)(PTR_DAT_10a8_0002_10a8_0034 + (int)(puVar19 + 0x3b) * 5),
                (char *)&PTR_DAT_10a8_0000_10a8_0044);
  if (local_a != (int16 *)0x430) goto LAB_1008_46a0;
  local_e = 1;
LAB_1008_472c:
  local_234 = DAT_10a8_03f9;
  local_230 = _PTR_PTR_DAT_10a8_0000_10a8_782e_10a8_03fd;
  iVar15 = FUN_1008_4c54((undefined2 *)&local_234);
  if (iVar15 == 0) {
    if (local_e != 0) goto LAB_1008_4c2c;
LAB_1008_46a0:
    do {
      pvVar31 = MAKEPROCINSTANCE((void *)CONCAT13(0x59,CONCAT12(0xe2,PTR_DAT_10a8_0000_10a8_839a)),
                                 (HANDLE16)&PTR_DAT_10a8_0000_10a8_1040);
      in_stack_0000f662 = (HINSTANCE16)((ulong)pvVar31 >> 0x10);
      in_stack_0000f660 = (int16 *)pvVar31;
      local_6 = (void *)((ulong)pvVar31 & 0xffff0000 | (ulong)local_6 & 0xffff);
      piVar12 = DIALOGBOX(in_stack_0000f660,in_stack_0000f662,(LPCSTR)CONCAT22(0x186,param_1),0,
                          PTR_DAT_10a8_0000_10a8_839a);
      FREEPROCINSTANCE((void *)CONCAT22(in_stack_0000f662,in_stack_0000f660));
      if (piVar12 == (int16 *)0x0) goto LAB_1008_4c2c;
      if (piVar12 == (int16 *)&DAT_10a8_0003) break;
      pvVar31 = MAKEPROCINSTANCE((void *)CONCAT13(0x35,CONCAT12(8,PTR_DAT_10a8_0000_10a8_839a)),
                                 (int)s_backup_d_10a8_1001 + 7);
      in_stack_0000f65e = (HINSTANCE16)((ulong)pvVar31 >> 0x10);
      in_stack_0000f65c = (int16 *)pvVar31;
      local_6 = (void *)((ulong)pvVar31 & 0xffff0000 | (ulong)local_6 & 0xffff);
      piVar12 = DIALOGBOX(in_stack_0000f65c,in_stack_0000f65e,(LPCSTR)CONCAT22(0x187,param_1),0,
                          PTR_DAT_10a8_0000_10a8_839a);
      FREEPROCINSTANCE((void *)CONCAT22(in_stack_0000f65e,in_stack_0000f65c));
      if (piVar12 == (int16 *)0x0) goto LAB_1008_4c2c;
    } while (piVar12 == (int16 *)&DAT_10a8_0001);
    goto LAB_1008_472c;
  }
  puVar24 = local_64;
  puVar23 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_0030;
  for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar8 = puVar24;
    puVar24 = puVar24 + 1;
    puVar4 = puVar23;
    puVar23 = puVar23 + 1;
    *puVar8 = *puVar4;
  }
  local_52 = 0;
  uVar28 = SUB42(&PTR_DAT_10a8_0000_10a8_1040,0);
  FUN_1040_190c();
  puVar23 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_0030;
  puVar24 = local_64;
  for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar8 = puVar23;
    puVar23 = puVar23 + 1;
    puVar4 = puVar24;
    puVar24 = puVar24 + 1;
    *puVar8 = *puVar4;
  }
  puVar24 = &local_234;
  uVar16 = 0xffff;
  do {
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    puVar4 = puVar24;
    puVar24 = (undefined4 *)((int)puVar24 + 1);
  } while (*(char *)puVar4 != '\0');
  uVar16 = ~uVar16;
  puVar25 = (undefined2 *)((int)puVar24 - uVar16);
  puVar26 = (undefined2 *)&DAT_10a8_85dc;
  for (uVar17 = uVar16 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
    puVar7 = puVar26;
    puVar26 = puVar26 + 1;
    puVar3 = puVar25;
    puVar25 = puVar25 + 1;
    *puVar7 = *puVar3;
  }
  for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
    puVar7 = puVar26;
    puVar26 = (undefined2 *)((int)puVar26 + 1);
    puVar3 = puVar25;
    puVar25 = (undefined2 *)((int)puVar25 + 1);
    *(undefined *)puVar7 = *(undefined *)puVar3;
  }
  pcVar13 = (char *)&DAT_10a8_85dc;
  uVar16 = 0xffff;
  do {
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar5 = pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar5 != '\0');
  *(undefined *)((int)&DAT_10a8_85d8 + ~uVar16) = 0;
  local_8 = (undefined *)0x0;
  local_6._2_2_ = (undefined4 *)&DAT_10a8_8864;
  do {
    if (local_8[-0x7d3e] == '\0') break;
    bVar10 = local_8[-0x7d3e] & 3;
    if (bVar10 == 1) {
      if ((local_8[-0x7d3e] & 0xfc) < 0x19) {
        puVar24 = (undefined4 *)((int)&DAT_10a8_446e + (uint)((byte)local_8[-0x7d3e] >> 2) * 0x76);
        goto LAB_1008_485a;
      }
      uVar28 = 0x1018;
      iVar15 = FUN_1018_4a4a(6);
      puVar24 = (undefined4 *)((int)local_6._2_2_ + -6);
      puVar23 = (undefined4 *)((int)&DAT_10a8_446e + iVar15 * 0x76);
      for (iVar15 = 0x1d; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar8 = puVar24;
        puVar24 = puVar24 + 1;
        puVar4 = puVar23;
        puVar23 = puVar23 + 1;
        *puVar8 = *puVar4;
      }
      *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
      pbVar6 = (byte *)((int)local_6._2_2_ + 1);
      *pbVar6 = *pbVar6 | 2;
      pbVar6 = (byte *)((int)local_6._2_2_ + 1);
      *pbVar6 = *pbVar6 & 0xe3;
      pbVar6 = (byte *)((int)local_6._2_2_ + 1);
      *pbVar6 = *pbVar6 | 0xe0;
      *(undefined4 *)((int)local_6._2_2_ + 6) = 0xffffffff;
    }
    else if (bVar10 == 2) {
      puVar24 = (undefined4 *)(&stack0xf66c + (uint)((byte)local_8[-0x7d3e] >> 2) * 0x76);
LAB_1008_485a:
      puVar23 = (undefined4 *)((int)local_6._2_2_ + -6);
      for (iVar15 = 0x1d; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar8 = puVar23;
        puVar23 = puVar23 + 1;
        puVar4 = puVar24;
        puVar24 = puVar24 + 1;
        *puVar8 = *puVar4;
      }
      *(undefined2 *)puVar23 = *(undefined2 *)puVar24;
    }
    else if (bVar10 == 3) {
      bVar10 = local_8[-0x7d3e];
      bVar9 = (byte)(((ulong)bVar10 & 0xffffff1c) >> 2);
      local_c = (undefined *)(uint)(bVar10 >> 5);
      if ((undefined *)&DAT_10a8_0003 < local_c) {
        uVar28 = 0x1018;
        local_c = (undefined *)FUN_1018_4a4a(4);
      }
      local_6._0_2_ = (uint)bVar9;
      if (1 < bVar9) {
        uVar28 = 0x1018;
        local_6._0_2_ = FUN_1018_4a4a(2);
      }
      puVar23 = (undefined4 *)((int)(local_c + (uint)local_6 * 4) * 0x76 + 0xa6f);
      puVar24 = (undefined4 *)((int)local_6._2_2_ + -6);
      for (iVar15 = 0x1d; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar8 = puVar24;
        puVar24 = puVar24 + 1;
        puVar4 = puVar23;
        puVar23 = puVar23 + 1;
        *puVar8 = *puVar4;
      }
      *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
      pbVar6 = (byte *)((int)local_6._2_2_ + 1);
      *pbVar6 = *pbVar6 | 2;
      puVar4 = local_6._2_2_;
      *(uint *)puVar4 =
           *(uint *)puVar4 ^
           ((byte)((byte)((ulong)(uint)((int)local_c << 10) >> 8) ^
                  *(byte *)((int)local_6._2_2_ + 1)) & 0x1c) << 8;
      uVar16 = *(uint *)local_6._2_2_;
      *(uint *)local_6._2_2_ =
           (uint)local_6 << 0xd ^ (uVar16 & 0xff | ((byte)((ulong)uVar16 >> 8) & 0x1f) << 8);
    }
    local_8 = local_8 + 1;
    local_6._2_2_ = (undefined4 *)((int)local_6._2_2_ + 0x76);
  } while (local_6._2_2_ < (undefined4 *)0x8fc4);
  puVar19 = local_8;
  PTR_DAT_10a8_0002_10a8_0038 = local_8;
  local_8 = (undefined *)0x0;
  if (0 < (int)puVar19) {
    local_6._2_2_ = (undefined4 *)0x885e;
    do {
      if (((*(byte *)((int)local_6._2_2_ + 7) & 2) == 0) &&
         (iVar15 = FUN_1078_2274((int)local_6._2_2_,CONCAT22(unaff_DI,unaff_SI)), iVar15 < 0)) {
        puVar24 = (undefined4 *)&DAT_10a8_446e;
        puVar23 = local_6._2_2_;
        for (iVar15 = 0x1d; iVar15 != 0; iVar15 = iVar15 + -1) {
          puVar8 = puVar23;
          puVar23 = puVar23 + 1;
          puVar4 = puVar24;
          puVar24 = puVar24 + 1;
          *puVar8 = *puVar4;
        }
        *(undefined2 *)puVar23 = *(undefined2 *)puVar24;
      }
      if (*(char *)(undefined2 *)((int)local_6._2_2_ + 0x56) == '\0') {
        iVar15 = FUN_1018_4a4a(0x18);
        pcVar13 = *(char **)(iVar15 * 2 + 0x4864);
        puVar25 = (undefined2 *)((int)local_6._2_2_ + 0x56);
        uVar16 = 0xffff;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar5 = pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (*pcVar5 != '\0');
        uVar16 = ~uVar16;
        puVar26 = (undefined2 *)(pcVar13 + -uVar16);
        for (uVar17 = uVar16 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
          puVar7 = puVar25;
          puVar25 = puVar25 + 1;
          puVar3 = puVar26;
          puVar26 = puVar26 + 1;
          *puVar7 = *puVar3;
        }
        for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar7 = puVar25;
          puVar25 = (undefined2 *)((int)puVar25 + 1);
          puVar3 = puVar26;
          puVar26 = (undefined2 *)((int)puVar26 + 1);
          *(undefined *)puVar7 = *(undefined *)puVar3;
        }
      }
      local_6._2_2_ = (undefined4 *)((int)local_6._2_2_ + 0x76);
      local_8 = (undefined *)((int)local_8 + 1);
    } while ((int)local_8 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  local_8 = (undefined *)0x1;
  if (1 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    local_a = (int16 *)0x892a;
    do {
      iVar15 = 0;
      if ((int16 *)0x88b4 < local_a) {
        local_6._2_2_ = (undefined4 *)0x88b4;
        do {
          uVar16 = 0xffff;
          iVar11 = 0;
          puVar24 = local_6._2_2_;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            puVar4 = puVar24;
            puVar24 = (undefined4 *)((int)puVar24 + 1);
          } while (*(char *)puVar4 != '\0');
          puVar23 = (undefined4 *)~uVar16;
          bVar29 = puVar24 < puVar23;
          pbVar27 = (byte *)((int)puVar24 - (int)puVar23);
          bVar30 = pbVar27 == (byte *)0x0;
          piVar12 = local_a;
          do {
            if (puVar23 == (undefined4 *)0x0) break;
            puVar23 = (undefined4 *)((int)puVar23 + -1);
            pbVar6 = pbVar27;
            pbVar27 = pbVar27 + 1;
            piVar2 = piVar12;
            piVar12 = (int16 *)((int)piVar12 + 1);
            bVar29 = *(byte *)piVar2 < *pbVar6;
            bVar30 = *(byte *)piVar2 == *pbVar6;
          } while (bVar30);
          if (!bVar30) {
            iVar11 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
          }
          if (iVar11 == 0) break;
          local_6._2_2_ = (undefined4 *)((int)local_6._2_2_ + 0x76);
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_8);
      }
      if (iVar15 < (int)local_8) {
        uVar16 = FUN_1018_4a4a(0x18);
LAB_1008_4a0a:
        puVar19 = (undefined *)0x0;
        if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
          in_stack_0000f65a = (char **)(uVar16 * 2 + 0x4864);
          local_6._0_2_ = uVar16;
          local_6._2_2_ = (undefined4 *)0x88b4;
          do {
            pcVar13 = *in_stack_0000f65a;
            uVar16 = 0xffff;
            iVar15 = 0;
            do {
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar5 = pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (*pcVar5 != '\0');
            pcVar18 = (char *)~uVar16;
            bVar29 = pcVar13 < pcVar18;
            pbVar27 = (byte *)(pcVar13 + -(int)pcVar18);
            bVar30 = pbVar27 == (byte *)0x0;
            puVar24 = local_6._2_2_;
            do {
              if (pcVar18 == (char *)0x0) break;
              pcVar18 = pcVar18 + -1;
              pbVar6 = pbVar27;
              pbVar27 = pbVar27 + 1;
              puVar4 = puVar24;
              puVar24 = (undefined4 *)((int)puVar24 + 1);
              bVar29 = *(byte *)puVar4 < *pbVar6;
              bVar30 = *(byte *)puVar4 == *pbVar6;
            } while (bVar30);
            if (!bVar30) {
              iVar15 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
            }
            uVar16 = (uint)local_6;
            if (iVar15 == 0) break;
            local_6._2_2_ = (undefined4 *)((int)local_6._2_2_ + 0x76);
            puVar19 = puVar19 + 1;
            uVar16 = (uint)local_6;
          } while ((int)puVar19 < (int)PTR_DAT_10a8_0002_10a8_0038);
        }
        if (puVar19 != PTR_DAT_10a8_0002_10a8_0038) {
          uVar16 = uVar16 + 1;
          if (0x17 < (int)uVar16) {
            uVar16 = 0;
          }
          goto LAB_1008_4a0a;
        }
        pcVar13 = *(char **)(uVar16 * 2 + 0x4864);
        uVar16 = 0xffff;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar5 = pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (*pcVar5 != '\0');
        uVar16 = ~uVar16;
        puVar25 = (undefined2 *)(pcVar13 + -uVar16);
        piVar12 = local_a;
        for (uVar17 = uVar16 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
          piVar2 = piVar12;
          piVar12 = (int16 *)((int)piVar12 + 2);
          puVar3 = puVar25;
          puVar25 = puVar25 + 1;
          *(undefined2 *)piVar2 = *puVar3;
        }
        for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
          piVar2 = piVar12;
          piVar12 = (int16 *)((int)piVar12 + 1);
          puVar3 = puVar25;
          puVar25 = (undefined2 *)((int)puVar25 + 1);
          *(byte *)piVar2 = *(byte *)puVar3;
        }
      }
      local_a = (int16 *)((int)local_a + 0x76);
      local_8 = (undefined *)((int)local_8 + 1);
    } while ((int)local_8 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    pbVar27 = (byte *)&DAT_10a8_8864;
    puVar22 = (uint *)local_30;
    puVar19 = PTR_DAT_10a8_0002_10a8_0038;
    do {
      uVar16 = (uint)(*pbVar27 >> 3);
      *puVar22 = uVar16;
      if ((0x1f < uVar16) || ((pbVar27[1] & 2) != 0)) {
        *puVar22 = 0xffff;
      }
      pbVar27 = pbVar27 + 0x76;
      puVar22 = puVar22 + 1;
      puVar19 = puVar19 + -1;
    } while (puVar19 != (undefined *)0x0);
  }
  iVar15 = 1;
  if (1 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    local_6._2_2_ = (undefined4 *)(local_30 + 2);
    do {
      if (*(int *)local_6._2_2_ != -1) {
        iVar11 = 0;
        if (local_30 < local_6._2_2_) {
          piVar20 = (int *)local_30;
          local_8 = (undefined *)iVar15;
          do {
            if (*piVar20 == *(int *)local_6._2_2_) break;
            piVar20 = piVar20 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar15);
        }
        if (iVar11 < iVar15) {
          local_8 = (undefined *)iVar15;
          iVar14 = FUN_1018_4a4a(2);
          if (iVar14 != 0) {
            iVar11 = iVar15;
          }
          *(undefined2 *)(local_30 + iVar11 * 2) = 0xffff;
        }
      }
      local_6._2_2_ = (undefined4 *)((int)local_6._2_2_ + 2);
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  puVar19 = (undefined *)0x0;
  if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    puVar24 = (undefined4 *)local_30;
    do {
      local_8 = puVar19;
      if (*(int *)puVar24 == -1) {
        uVar28 = FUN_1018_4a4a(0x20);
        *(undefined2 *)puVar24 = uVar28;
        local_8 = puVar19;
        local_6._2_2_ = puVar24;
LAB_1008_4b7a:
        puVar21 = (undefined *)0x0;
        if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
          do {
            if ((puVar21 != puVar19) && (*(int *)(local_30 + (int)puVar21 * 2) == *(int *)puVar24))
            break;
            puVar21 = puVar21 + 1;
          } while ((int)puVar21 < (int)PTR_DAT_10a8_0002_10a8_0038);
        }
        if (puVar21 != PTR_DAT_10a8_0002_10a8_0038) {
          puVar4 = puVar24;
          *(int *)puVar4 = *(int *)puVar4 + 1;
          if (0x1f < *(int *)puVar24) {
            *(undefined2 *)puVar24 = 0;
          }
          goto LAB_1008_4b7a;
        }
      }
      puVar24 = (undefined4 *)((int)puVar24 + 2);
      puVar19 = puVar19 + 1;
    } while ((int)puVar19 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  local_8 = (undefined *)0x0;
  if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    puVar22 = (uint *)&DAT_10a8_8864;
    puVar19 = PTR_DAT_10a8_0002_10a8_0038;
    pcVar13 = local_30;
    do {
      puVar1 = puVar22;
      *puVar1 = *puVar1 ^ (byte)(*pcVar13 << 3 ^ *(byte *)puVar22) & 0xf8;
      puVar22 = puVar22 + 0x3b;
      puVar19 = puVar19 + -1;
      pcVar13 = pcVar13 + 2;
    } while (puVar19 != (undefined *)0x0);
  }
  if (PTR_DAT_10a8_0000_10a8_0244 == (undefined *)0x0) {
    PTR_DAT_10a8_0000_10a8_0244 = (undefined *)&DAT_10a8_0001;
    DESTROYWINDOW((HWND16)PTR_DAT_10a8_0000_10a8_0242);
    PTR_DAT_10a8_0000_10a8_0242 = (undefined *)0x0;
    SHOWWINDOW(5,(int16)CONCAT214(in_stack_0000f662,
                                  CONCAT212(in_stack_0000f660,
                                            CONCAT210(in_stack_0000f65e,
                                                      CONCAT28(in_stack_0000f65c,
                                                               CONCAT26(in_stack_0000f65a,
                                                                        CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,PTR_DAT_10a8_0000_10a8_58b4))))))));
  }
  FUN_1040_4304();
  if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
    FUN_1008_57b8(unaff_SI,CONCAT212(in_stack_0000f664,
                                     CONCAT210(in_stack_0000f662,
                                               CONCAT28(in_stack_0000f660,
                                                        CONCAT26(in_stack_0000f65e,
                                                                 CONCAT24(in_stack_0000f65c,
                                                                          CONCAT22(in_stack_0000f65a
                                                                                   ,unaff_DI)))))),
                  in_stack_0000f666,(HMENU16)in_stack_0000f668,in_stack_0000f66a,in_stack_0000f66c);
  }
LAB_1008_4c3f:
  DAT_10a8_0a47 = DAT_10a8_0a47 ^ ((byte)((ulong)(uint)(local_10 << 10) >> 8) ^ DAT_10a8_0a47) & 4;
  return;
}



// WARNING: Type propagation algorithm not settling

undefined2 __cdecl16far FUN_1008_4c54(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  bool16 bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined2 *puVar16;
  undefined2 unaff_SS;
  undefined4 local_24c;
  undefined2 local_14c;
  undefined auStack_14a [254];
  undefined4 local_4c;
  undefined *local_48;
  undefined4 *local_44;
  int local_16;

  if (param_1 == (undefined2 *)0x0) {
    local_14c._0_1_ = '\0';
  }
  else {
    puVar16 = &local_14c;
    uVar8 = 0xffff;
    puVar12 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      puVar2 = puVar12;
      puVar12 = (undefined2 *)((int)puVar12 + 1);
    } while (*(char *)puVar2 != '\0');
    uVar8 = ~uVar8;
    puVar12 = (undefined2 *)((int)puVar12 - uVar8);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar4 = puVar16;
      puVar16 = puVar16 + 1;
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar4 = *puVar2;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = puVar16;
      puVar16 = (undefined2 *)((int)puVar16 + 1);
      puVar2 = puVar12;
      puVar12 = (undefined2 *)((int)puVar12 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar2;
    }
  }
  puVar13 = &local_24c;
  puVar11 = (undefined4 *)s_Stars__Game_Files___XY__10a8_0401;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar13;
    puVar13 = puVar13 + 1;
    puVar1 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar5 = *puVar1;
  }
  if ((char)local_24c != '\0') {
    iVar10 = 0;
    do {
      if (*(char *)((int)&local_24c + iVar10) == '|') {
        *(undefined *)((int)&local_24c + iVar10) = 0;
      }
      iVar6 = iVar10 + 1;
      iVar10 = iVar10 + 1;
    } while (*(char *)((int)&local_24c + iVar6) != '\0');
  }
  puVar13 = &local_4c;
  for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  local_4c._0_2_ = 0x48;
  local_4c._2_2_ = 0;
  local_48 = PTR_DAT_10a8_0000_10a8_58b4;
  local_44 = &local_24c;
  bVar7 = GETSAVEFILENAME(CONCAT22(unaff_SS,&local_4c));
  if (bVar7 == 0) {
    return 0;
  }
  if (local_16 == 0) {
    pcVar14 = (char *)&PTR_PTR_DAT_10a8_0000_10a8_7978_10a8_0434;
    pcVar15 = (char *)&local_14c;
    uVar8 = 0xffff;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar3 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar3 != '\0');
    uVar8 = ~uVar8;
    puVar16 = (undefined2 *)(pcVar14 + -uVar8);
    iVar10 = -1;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar3 = pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (*pcVar3 != '\0');
    puVar12 = (undefined2 *)(pcVar15 + -1);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar4 = puVar12;
      puVar12 = puVar12 + 1;
      puVar2 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar4 = *puVar2;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = puVar12;
      puVar12 = (undefined2 *)((int)puVar12 + 1);
      puVar2 = puVar16;
      puVar16 = (undefined2 *)((int)puVar16 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar2;
    }
  }
  else {
    *(undefined2 *)((int)&local_14c + local_16) = PTR_PTR_DAT_10a8_0000_10a8_7978_10a8_0431;
    *(undefined *)((int)&local_14c + local_16 + 2) = DAT_10a8_0433;
  }
  pcVar15 = (char *)&local_14c;
  uVar8 = 0xffff;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar3 = pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (*pcVar3 != '\0');
  uVar8 = ~uVar8;
  puVar16 = (undefined2 *)(pcVar15 + -uVar8);
  for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar4 = param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar4 = *puVar2;
  }
  for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
    puVar4 = param_1;
    param_1 = (undefined2 *)((int)param_1 + 1);
    puVar2 = puVar16;
    puVar16 = (undefined2 *)((int)puVar16 + 1);
    *(undefined *)puVar4 = *(undefined *)puVar2;
  }
  return 1;
}
