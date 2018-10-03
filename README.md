# d30360e
* Date difference in years according to the ... daycount method
* Synonyms: 30E/360 ISDA, Eurobond Basis ISDA-2000, German SWX, German Master EBF MA


## ISO 20022 -- A007

    "Method whereby interest is calculated based on a 30-day month and a 360-day year. Accrued interest to a value date on the last day of a month shall be the same as to the 30th calendar day of the same month. This means that a 31st is assumed to be a 30th and the 28 Feb (or 29 Feb for a leap year) is assumed to be equivalent to a 30 Feb. However, if the last day of the maturity coupon period is the last day of February, it will not be assumed to be a 30th. It is a variation of the 30/360 (ICMA) method commonly used for eurobonds. The usage of this variation is only relevant when the coupon periods are scheduled to end on the last day of the month."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/d30360e
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/d30360e": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/d30360e/blob/master/test.c) and [demo.c](https://github.com/hcnn/d30360e/blob/master/demo.c)

```
git clone git@github.com:hcnn/d30360e.git
cd d30360e
make deps
make validate
make showcase
```
