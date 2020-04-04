T=int(input())

for t in range(0,T):
  ld=0
  cd=0
  op=""
  st=str(input())
  diff=int()
  for i in range(0,len(st)):
    cd=int(st[i])
    diff=cd-ld
    ld=cd
    if diff>0:
      for d in range(0,diff):
        op=op+"("
    elif diff<0:
      for d in range(0,abs(diff)):
        op=op+")"
    op=op+str(cd)
  diff=0-ld
  if diff>0:
    for d in range(0,diff):
      op=op+"("
  elif diff<0:
    for d in range(0,abs(diff)):
      op=op+")"
  print("Case #{}: {}".format(t+1,op))