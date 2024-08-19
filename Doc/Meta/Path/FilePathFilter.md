# FilePathFilter

功能描述: 设定文件选择器的扩展名，规则符合系统对话框的格式规范，可以填写多个扩展名。
使用位置: UPROPERTY
Feature: Editor
引擎模块: Path Property
元数据类型: string="abc"
限制类型: FFilePath
Example: FilePathFilter="FileType”
Status: Linked
常用程度: 3

一般常见的用法是”.umap”，“.uasset”之类的。但也可以支持采用“描述 | *.后缀名”的格式自己书写过滤方式，规则同windows系统选取规则一样，也可以同时写多个后缀名。