## How to contribute?

* Have a look at the table in README.md. It contain the list of codes solved by people in CodeChef's rated contests.
* Find a code for which an entry which is not yet added create an issue for it.
* Make sure you are assigned for the issue before sending the PR.
* Code added should follow the standard guidelines of that language, untidy codes will not be accepted.
* Send a PR.
* Make sure that you only send the source code not the binaries and executables in PR.
* While sending a PR make sure you follow one issue per PR rule.
* Link to your solution on CodeChef is mandatory.


<a name="cs"></a>

## Code Styleguide

* Code submitted should be modular. 
* Add the code in their respective directory only.
* Filename should be same as that of the problem code.
* Currently we are accepting contributions in C, C++, Java and Python but other languages may be considered after a discussion.
* Meaningful comments to explain your code better are welcomed.
* No profanity.
* We have defined [skeleton codes](#samples) for some popular languages below. Please follow them whenever possible.
* Sample skeleton codes are for showing guidelines and indentations only.


<a name="improving"></a>

## Improving a Dish

* If you feel you can improve upon any added code, feel free to open an issue discussing the improvements.
* The points to be considered for improvement will be the time required by code to pass testcases, easy explanation, etc.

<a name="samples"></a>

## Samples

#### C

```c
int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        /*
        your code here;
        */
    }
}
```

#### C++

```c++
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        /*
        your code here;
        */
    }
}
```

#### Python
```python
def main():
    tc = int(input())
    while tc > 0:
        Your Dish here...
        tc -= 1
    
if __name__ == '__main__':
    main()
```

#### Java
```java
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int tc = inp.nextInt();
        while (tc-- != 0) {
            Your code goes here...
        }
    }
}
```
