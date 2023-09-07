#!/usr/bin/env python
# coding: utf-8

# In[8]:


Basic = 10000
basic = 4567
if(Basic == 10000):
   grade = 'A'
elif(basic == 4567):
   grade = 'B'
HRA = 20 % Basic
DA = 50 % basic
PF= 11 % basic
if(grade=='A'):
   Allow = 1700
elif(grade=='B'):
   Allow = 1500
elif(grade=='C'):
   Allow = 1300
gross_salary = Basic + HRA + DA + Allow - PF
print(gross_salary)


# In[ ]:




