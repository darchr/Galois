/** BaseTwoInputGate is basic structure of a two input gates -*- C++ -*-
 * @file
 * @section License
 *
 * Galois, a framework to exploit amorphous data-parallelism in irregular
 * programs.
 *
 * Copyright (C) 2011, The University of Texas at Austin. All rights reserved.
 * UNIVERSITY EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES CONCERNING THIS
 * SOFTWARE AND DOCUMENTATION, INCLUDING ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR ANY PARTICULAR PURPOSE, NON-INFRINGEMENT AND WARRANTIES OF
 * PERFORMANCE, AND ANY WARRANTY THAT MIGHT OTHERWISE ARISE FROM COURSE OF
 * DEALING OR USAGE OF TRADE.  NO WARRANTY IS EITHER EXPRESS OR IMPLIED WITH
 * RESPECT TO THE USE OF THE SOFTWARE OR DOCUMENTATION. Under no circumstances
 * shall University be liable for incidental, special, indirect, direct or
 * consequential damages or loss of profits, interruption of business, or
 * related expenses which may arise from use of Software or Documentation,
 * including but not limited to those resulting from defects in Software and/or
 * Documentation, or loss or inaccuracy of data of any kind.
 *
 * @author M. Amber Hassaan <ahassaan@ices.utexas.edu>
 */

#ifndef _BASE_TWO_INPUT_GATE_H_
#define _BASE_TWO_INPUT_GATE_H_

#include <string>
#include <sstream>

#include "comDefs.h"
#include "logicDefs.h"

class BaseTwoInputGate {
protected:

  /** The output name. */
  std::string outputName;

  /** The input1 name. */
  std::string input1Name;

  /** The input2 name. */
  std::string input2Name;

  /** The output val. */
  LogicVal outputVal;

  /** The input1 val. */
  LogicVal input1Val;

  /** The input2 val. */
  LogicVal input2Val;


public:
  /**
   * Instantiates a new two input gate.
   *
   * @param outputName the output name
   * @param input1Name the input1 name
   * @param input2Name the input2 name
   */
  BaseTwoInputGate (const std::string& outputName, const std::string& input1Name, const std::string& input2Name)
    : outputName (outputName), input1Name (input1Name), input2Name (input2Name)
      , outputVal ('0'), input1Val ('0'), input2Val ('0') {}


  /**
   * @param net: name of a wire
   * @return true if has an input with the name equal to 'net'
   */
  bool hasInputName(const std::string& net) const {
    return (input1Name == (net) || input2Name == (net));
  }

  /**
   * @param net: name of a wire
   * @return true if has an output with the name equal to 'net'
   */
  bool hasOutputName(const std::string& net) const {
    return outputName == (net);
  }

  /** 
   * for debugging
   */
  const std::string toString() const {
    std::ostringstream ss;
    ss << "output: " << outputName << " = " << outputVal << " input1: " << input1Name << " = "
        << input1Val << " input2: " << input2Name << " = " << input2Val;
    return ss.str ();
  }

  /**
   * Gets the input1 name.
   *
   * @return the input1 name
   */
  const std::string& getInput1Name() const {
    return input1Name;
  }

  /**
   * Sets the input1 name.
   *
   * @param input1Name the new input1 name
   */
  void setInput1Name(const std::string& input1Name) {
    this->input1Name = input1Name;
  }

  /**
   * Gets the input1 val.
   *
   * @return the input1 val
   */
  const LogicVal& getInput1Val() const {
    return input1Val;
  }

  /**
   * Sets the input1 val.
   *
   * @param input1Val the new input1 val
   */
  void setInput1Val(const LogicVal& input1Val) {
    this->input1Val = input1Val;
  }

  /**
   * Gets the input2 name.
   *
   * @return the input2 name
   */
  const std::string& getInput2Name() {
    return input2Name;
  }

  /**
   * Sets the input2 name.
   *
   * @param input2Name the new input2 name
   */
  void setInput2Name(const std::string& input2Name) {
    this->input2Name = input2Name;
  }

  /**
   * Gets the input2 val.
   *
   * @return the input2 val
   */
  const LogicVal& getInput2Val() const {
    return input2Val;
  }

  /**
   * Sets the input2 val.
   *
   * @param input2Val the new input2 val
   */
  void setInput2Val(const LogicVal& input2Val) {
    this->input2Val = input2Val;
  }

  /** 
   * @return the name of the output
   */
  const std::string& getOutputName() const {
    return outputName;
  }

  /**
   * Sets the output name.
   *
   * @param outputName the new output name
   */
  void setOutputName(const std::string& outputName) {
    this->outputName = outputName;
  }

  /**
   * Gets the output val.
   *
   * @return the output val
   */
  const LogicVal& getOutputVal() const {
    return outputVal;
  }

  /**
   * Sets the output val.
   *
   * @param outputVal the new output val
   */
  void setOutputVal (const LogicVal& outputVal) {
    this->outputVal = outputVal;
  }
};

#endif
