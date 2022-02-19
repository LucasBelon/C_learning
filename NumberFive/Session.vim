let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Learning/NumberFive
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
argglobal
%argdel
$argadd 01-1PointerIntro.c
set stal=2
tabnew
tabnew
tabnew
tabrewind
edit ~/C_Learning/NumberFive
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 20 + 53) / 106)
exe '2resize ' . ((&lines * 21 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 85 + 53) / 106)
exe '3resize ' . ((&lines * 1 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 85 + 53) / 106)
argglobal
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 8 - ((7 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 8
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFive/01-1PointerIntro.c") | buffer ~/C_Learning/NumberFive/01-1PointerIntro.c | else | edit ~/C_Learning/NumberFive/01-1PointerIntro.c | endif
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 7 - ((6 * winheight(0) + 10) / 21)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 7
normal! 0
wincmd w
argglobal
terminal ++curwin ++cols=85 ++rows=1 
let s:term_buf_8 = bufnr()
balt ~/C_Learning/NumberFive/01-1PointerIntro.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 0) / 1)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 20 + 53) / 106)
exe '2resize ' . ((&lines * 21 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 85 + 53) / 106)
exe '3resize ' . ((&lines * 1 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 85 + 53) / 106)
tabnext
edit ~/C_Learning/NumberFive/01-2PointerInFunc.c
argglobal
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
tabnext
edit ~/C_Learning/NumberFive/01-3Pointers.c
argglobal
balt ~/C_Learning/NumberFive/01-2PointerInFunc.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
19
normal! zo
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
tabnext
edit ~/C_Learning/NumberFive/01-4PointersVsIndex.c
argglobal
balt ~/C_Learning/NumberFive/01-3Pointers.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
7
normal! zo
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
tabnext 4
set stal=1
badd +1 ~/C_Learning/NumberFive/01-1PointerIntro.c
badd +3 ~/C_Learning/NumberFive/01-2PointerInFunc.c
badd +1 ~/C_Learning/NumberFive/01-3Pointers.c
badd +0 ~/C_Learning/NumberFive/01-4PointersVsIndex.c
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToOS
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
