.model small ;Модель памяти SMALL использует сегменты размером не более 64Кб
.stack 100h ;Сегмент стека размером 100h (256 байт)
.data ;Начало сегмента данных
;Определение переменных
.code ;Начало сегмента кода
start: ;Точка входа в программу start
;Предопределенная метка @data обозначает
;адрес сегмента данных в момент запуска программы,
mov AX, @data ;который сначала загрузим в AX,
mov DS, AX ;а затем перенесем из AX в DS
;Текст программы

MOV AX,09
MOV BX,03
CALL OUTPUT_AX
MOV DL,' '
MOV AH,02h
INT 21h
CALL OUTPUT_BX
;первый вывод
XCHG AX,BX;обмен
mjmp DB 13,10,'$'
MOV DX,offset mjmp
MOV AH,09h
INT 21h
;переход строки
MOV AX,09
MOV BX,03
CALL OUTPUT_AX
MOV DL,' '
MOV AH,02h
INT 21h
CALL OUTPUT_BX
;второй вывод


	OUTPUT_AX PROC NEAR
	ADD AX,30h
	MOV DS:0000,AL
	MOV byte PTR DS:0001, '$'
	MOV AH,09h
	MOV DX,0
	INT 21h
	RET
	OUTPUT_AX ENDP


	OUTPUT_BX PROC NEAR
	ADD BX,30h
	MOV DS:0000,BL
	MOV byte PTR DS:0001, '$'
	MOV AH,09h
	MOV DX,0
	INT 21h
	RET
	OUTPUT_BX ENDP

mov AX,4C00h
int 21h
end start