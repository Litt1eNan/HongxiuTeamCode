# dayup = 1.0
# dayfactor = 0.01
# for i in range(0,365):
#     if i % 7 in [6,0]:
#         dayup = dayup*(1-dayfactor)
#     else:
#         dayup = dayup*(1+dayfactor)
# print("{:.2f}".format(dayup))
def dayUP(df):
    dayup = 1
    for i in range(365):
        if i % 7 in [6,0]:
            dayup = dayup*(1 - 0.01)
        else:
            dayup = dayup*(1 + df)
    return dayup
dayfactor = 0.01
while dayUP(dayfactor) < 37.78:
    dayfactor += 0.001
print("{:.3f}".format(dayfactor))
print(format(\""))