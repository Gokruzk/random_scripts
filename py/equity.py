def new_eq_for(e,I):
    return e * (1 - I/100)
    
def new_shares(s, I):
    rI = I / 100
    return (rI / (1 - rI)) * s

def new_company_value(I, I_value):
    return (I_value * 100) / 20
    
def print_equity(eq):
    for e in eq:
        print(f'{e["name"]}: {e["value"]}%')
    print("\n")

# Current company value
cv = 0
# Current shares
s = 1000000
# Current equity
eq = [
    {"name": 'AA', "value": 55},
    {"name": 'BB', "value": 30},
    {"name": 'CC', "value": 10},
]

def main():
    op = 0
    while(op != 3):
        print("1. Current equity")
        print("2. Simulate investor")
        print("3. Fin")
        op = int(input("OP: "))
        
        if op == 1:
            print("\nCap table:")
            print_equity(eq)
        elif op == 2:
            # New equity
            new_eq = []
            
            # New investor equity
            I = float(input("New investor equity (%): "))
            I_value = float(input("Investor equity value ($): "))
            
            for e in eq:
                ne=new_eq_for(e["value"],I)
                new_eq.append({"name": e["name"], "value": ne})
                
            new_eq.append({"name": 'investor', "value":I})
            
            print("\nNew Cap table:")
            print_equity(new_eq)
            
            ns = new_shares(s, I)
            print(f'Shares to create: {ns}')
            print(f'Final Shares: {s + ns}')
            print(f'Shares to create: {new_shares(s, I)}')
            ncv = new_company_value(I,I_value)
            print(f'Pre-money company value: ${ncv - I_value}')
            print(f'Post-money company value: ${ncv}')
        else:
            pass
            
if __name__ == "__main__":
    main()
