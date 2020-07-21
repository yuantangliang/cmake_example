//
// Created by meter on 20-6-17.
//

#ifndef CMAKE_MULTI_TARGET_HELLO_H
#define CMAKE_MULTI_TARGET_HELLO_H

/**@file   Math.cpp
* @brief    通用的数学计算类
* @version     V1.0
* @copyright    yauntl
**********************************************************************************
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2018/08/17  <td>1.0      <td>yauntl  <td>创建初始版本
* </table>
*
**********************************************************************************
*/


#ifdef __cplusplus
extern "C"
{
#endif

/*! \brief 通用的数学计算类
 *  支持 + - 运算
 *
 * 使用示例如下：
 *@code
 *      math = Math()
 *      int sum = math.add(1, 2)
 *@endcode
 */
class Math
{
public:
    /*! \brief add 运算
     *
     * @details
     * 将 x 和 y 相加并返回结果
     *
     * @param x 加法因子1
     * @param y 加法因子2
     * @return x和y之和
     */
    int  add(int x, int y);
    int  sub(int x, int y);

    int  errocode; ///< 错误码， 出现错误时，可以通过错误码判断错误原因
};

int  gloabl_add(int a, int b);




#ifdef __cplusplus
}
#endif

#endif //CMAKE_MULTI_TARGET_HELLO_H
