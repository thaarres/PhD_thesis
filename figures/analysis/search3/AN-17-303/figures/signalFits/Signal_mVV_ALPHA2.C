void Signal_mVV_ALPHA2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:48 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-0.3550558,5806.667,6.552614);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TF1 *ALPHA2_func1258 = new TF1("ALPHA2_func","pol7",0,13000);
   ALPHA2_func1258->SetFillColor(19);
   ALPHA2_func1258->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   ALPHA2_func1258->SetMarkerColor(ci);
   ALPHA2_func1258->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   ALPHA2_func1258->SetLineColor(ci);
   ALPHA2_func1258->SetLineWidth(3);
   ALPHA2_func1258->SetChisquare(18.74685);
   ALPHA2_func1258->SetNDF(5);
   ALPHA2_func1258->GetXaxis()->SetTitle("M_{VV} (GeV)");
   ALPHA2_func1258->GetXaxis()->SetRange(9,43);
   ALPHA2_func1258->GetXaxis()->SetNdivisions(209);
   ALPHA2_func1258->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1258->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1258->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1258->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1258->GetXaxis()->SetTitleOffset(0.94);
   ALPHA2_func1258->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1258->GetYaxis()->SetTitle("ALPHA2 (GeV)");
   ALPHA2_func1258->GetYaxis()->SetNdivisions(504);
   ALPHA2_func1258->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1258->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1258->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1258->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1258->GetYaxis()->SetTitleOffset(0.97);
   ALPHA2_func1258->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1258->SetParameter(0,63.60358);
   ALPHA2_func1258->SetParError(0,9.428449);
   ALPHA2_func1258->SetParLimits(0,0,0);
   ALPHA2_func1258->SetParameter(1,-0.1836038);
   ALPHA2_func1258->SetParError(1,0.02964512);
   ALPHA2_func1258->SetParLimits(1,0,0);
   ALPHA2_func1258->SetParameter(2,0.0002167032);
   ALPHA2_func1258->SetParError(2,3.768054e-05);
   ALPHA2_func1258->SetParLimits(2,0,0);
   ALPHA2_func1258->SetParameter(3,-1.336116e-07);
   ALPHA2_func1258->SetParError(3,2.509694e-08);
   ALPHA2_func1258->SetParLimits(3,0,0);
   ALPHA2_func1258->SetParameter(4,4.692388e-11);
   ALPHA2_func1258->SetParError(4,9.476984e-12);
   ALPHA2_func1258->SetParLimits(4,0,0);
   ALPHA2_func1258->SetParameter(5,-9.434391e-15);
   ALPHA2_func1258->SetParError(5,2.035351e-15);
   ALPHA2_func1258->SetParLimits(5,0,0);
   ALPHA2_func1258->SetParameter(6,1.009708e-18);
   ALPHA2_func1258->SetParError(6,2.310757e-19);
   ALPHA2_func1258->SetParLimits(6,0,0);
   ALPHA2_func1258->SetParameter(7,-4.455092e-23);
   ALPHA2_func1258->SetParError(7,1.074222e-23);
   ALPHA2_func1258->SetParLimits(7,0,0);
   ALPHA2_func1258->Draw("C");
   
   Double_t _fx1257[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1257[13] = {
   1.52805,
   1.178716,
   1.24625,
   1.684194,
   2.139147,
   2.028978,
   2.15583,
   2.8,
   2.8,
   2.8,
   2.782474,
   2.8,
   2.652469};
   Double_t _fex1257[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1257[13] = {
   0.05240206,
   0.03927193,
   0.04116508,
   0.06721659,
   0.07511417,
   0.07629418,
   0.09473195,
   0.1442621,
   0.1159893,
   0.1837044,
   0.3487137,
   0.0611729,
   0.1199234};
   TGraphErrors *gre = new TGraphErrors(13,_fx1257,_fy1257,_fex1257,_fey1257);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1257 = new TH1F("Graph_Graph1257","",100,550,5950);
   Graph_Graph1257->SetMinimum(0.9402699);
   Graph_Graph1257->SetMaximum(3.330362);
   Graph_Graph1257->SetDirectory(0);
   Graph_Graph1257->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1257->SetLineColor(ci);
   Graph_Graph1257->GetXaxis()->SetLabelFont(42);
   Graph_Graph1257->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1257->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1257->GetXaxis()->SetTitleFont(42);
   Graph_Graph1257->GetYaxis()->SetLabelFont(42);
   Graph_Graph1257->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1257->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1257->GetYaxis()->SetTitleFont(42);
   Graph_Graph1257->GetZaxis()->SetLabelFont(42);
   Graph_Graph1257->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1257->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1257->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1257);
   
   
   TF1 *ALPHA2_func1258 = new TF1("ALPHA2_func","pol7",1000,5500);
   ALPHA2_func1258->SetBit(TF1::kNotDraw);
   ALPHA2_func1258->SetFillColor(19);
   ALPHA2_func1258->SetFillStyle(0);
   ALPHA2_func1258->SetLineColor(2);
   ALPHA2_func1258->SetLineWidth(2);
   ALPHA2_func1258->SetChisquare(18.74685);
   ALPHA2_func1258->SetNDF(5);
   ALPHA2_func1258->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1258->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1258->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1258->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1258->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1258->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1258->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1258->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1258->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1258->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1258->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1258->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1258->SetParameter(0,63.60358);
   ALPHA2_func1258->SetParError(0,9.428449);
   ALPHA2_func1258->SetParLimits(0,0,0);
   ALPHA2_func1258->SetParameter(1,-0.1836038);
   ALPHA2_func1258->SetParError(1,0.02964512);
   ALPHA2_func1258->SetParLimits(1,0,0);
   ALPHA2_func1258->SetParameter(2,0.0002167032);
   ALPHA2_func1258->SetParError(2,3.768054e-05);
   ALPHA2_func1258->SetParLimits(2,0,0);
   ALPHA2_func1258->SetParameter(3,-1.336116e-07);
   ALPHA2_func1258->SetParError(3,2.509694e-08);
   ALPHA2_func1258->SetParLimits(3,0,0);
   ALPHA2_func1258->SetParameter(4,4.692388e-11);
   ALPHA2_func1258->SetParError(4,9.476984e-12);
   ALPHA2_func1258->SetParLimits(4,0,0);
   ALPHA2_func1258->SetParameter(5,-9.434391e-15);
   ALPHA2_func1258->SetParError(5,2.035351e-15);
   ALPHA2_func1258->SetParLimits(5,0,0);
   ALPHA2_func1258->SetParameter(6,1.009708e-18);
   ALPHA2_func1258->SetParError(6,2.310757e-19);
   ALPHA2_func1258->SetParLimits(6,0,0);
   ALPHA2_func1258->SetParameter(7,-4.455092e-23);
   ALPHA2_func1258->SetParError(7,1.074222e-23);
   ALPHA2_func1258->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(ALPHA2_func1258);
   gre->Draw("p");
   
   TF1 *ALPHA2_func1259 = new TF1("ALPHA2_func","pol7",0,13000);
   ALPHA2_func1259->SetFillColor(19);
   ALPHA2_func1259->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   ALPHA2_func1259->SetMarkerColor(ci);
   ALPHA2_func1259->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   ALPHA2_func1259->SetLineColor(ci);
   ALPHA2_func1259->SetLineWidth(3);
   ALPHA2_func1259->SetChisquare(18.74685);
   ALPHA2_func1259->SetNDF(5);
   ALPHA2_func1259->GetXaxis()->SetTitle("M_{VV} (GeV)");
   ALPHA2_func1259->GetXaxis()->SetRange(9,43);
   ALPHA2_func1259->GetXaxis()->SetNdivisions(209);
   ALPHA2_func1259->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1259->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1259->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1259->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1259->GetXaxis()->SetTitleOffset(0.94);
   ALPHA2_func1259->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1259->GetYaxis()->SetTitle("ALPHA2 (GeV)");
   ALPHA2_func1259->GetYaxis()->SetNdivisions(504);
   ALPHA2_func1259->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1259->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1259->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1259->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1259->GetYaxis()->SetTitleOffset(0.97);
   ALPHA2_func1259->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1259->SetParameter(0,63.60358);
   ALPHA2_func1259->SetParError(0,9.428449);
   ALPHA2_func1259->SetParLimits(0,0,0);
   ALPHA2_func1259->SetParameter(1,-0.1836038);
   ALPHA2_func1259->SetParError(1,0.02964512);
   ALPHA2_func1259->SetParLimits(1,0,0);
   ALPHA2_func1259->SetParameter(2,0.0002167032);
   ALPHA2_func1259->SetParError(2,3.768054e-05);
   ALPHA2_func1259->SetParLimits(2,0,0);
   ALPHA2_func1259->SetParameter(3,-1.336116e-07);
   ALPHA2_func1259->SetParError(3,2.509694e-08);
   ALPHA2_func1259->SetParLimits(3,0,0);
   ALPHA2_func1259->SetParameter(4,4.692388e-11);
   ALPHA2_func1259->SetParError(4,9.476984e-12);
   ALPHA2_func1259->SetParLimits(4,0,0);
   ALPHA2_func1259->SetParameter(5,-9.434391e-15);
   ALPHA2_func1259->SetParError(5,2.035351e-15);
   ALPHA2_func1259->SetParLimits(5,0,0);
   ALPHA2_func1259->SetParameter(6,1.009708e-18);
   ALPHA2_func1259->SetParError(6,2.310757e-19);
   ALPHA2_func1259->SetParLimits(6,0,0);
   ALPHA2_func1259->SetParameter(7,-4.455092e-23);
   ALPHA2_func1259->SetParError(7,1.074222e-23);
   ALPHA2_func1259->SetParLimits(7,0,0);
   ALPHA2_func1259->Draw("Csame");
   
   Double_t _fx1259[12] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5500};
   Double_t _fy1259[12] = {
   1.345671,
   1.1,
   1.139211,
   1.510249,
   1.930794,
   1.848239,
   1.930653,
   2.492681,
   2.148817,
   2.518199,
   2.642633,
   2.466186};
   Double_t _fex1259[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1259[12] = {
   0.01458928,
   0.0009399821,
   0.01199319,
   0.01706884,
   0.01901642,
   0.02017809,
   0.02098727,
   0.03349048,
   0.02375688,
   0.03535349,
   0.04186242,
   0.09196124};
   gre = new TGraphErrors(12,_fx1259,_fy1259,_fex1259,_fey1259);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1259 = new TH1F("Graph_Graph1259","",100,550,5950);
   Graph_Graph1259->SetMinimum(0.9405165);
   Graph_Graph1259->SetMaximum(2.843039);
   Graph_Graph1259->SetDirectory(0);
   Graph_Graph1259->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1259->SetLineColor(ci);
   Graph_Graph1259->GetXaxis()->SetLabelFont(42);
   Graph_Graph1259->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1259->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1259->GetXaxis()->SetTitleFont(42);
   Graph_Graph1259->GetYaxis()->SetLabelFont(42);
   Graph_Graph1259->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1259->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1259->GetYaxis()->SetTitleFont(42);
   Graph_Graph1259->GetZaxis()->SetLabelFont(42);
   Graph_Graph1259->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1259->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1259->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1259);
   
   
   TF1 *ALPHA2_func1260 = new TF1("ALPHA2_func","pol7",1000,5500);
   ALPHA2_func1260->SetBit(TF1::kNotDraw);
   ALPHA2_func1260->SetFillColor(19);
   ALPHA2_func1260->SetFillStyle(0);
   ALPHA2_func1260->SetLineColor(2);
   ALPHA2_func1260->SetLineWidth(2);
   ALPHA2_func1260->SetChisquare(370.0439);
   ALPHA2_func1260->SetNDF(4);
   ALPHA2_func1260->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1260->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1260->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1260->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1260->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1260->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1260->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1260->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1260->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1260->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1260->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1260->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1260->SetParameter(0,38.72353);
   ALPHA2_func1260->SetParError(0,2.421785);
   ALPHA2_func1260->SetParLimits(0,0,0);
   ALPHA2_func1260->SetParameter(1,-0.1082614);
   ALPHA2_func1260->SetParError(1,0.00789384);
   ALPHA2_func1260->SetParLimits(1,0,0);
   ALPHA2_func1260->SetParameter(2,0.000124605);
   ALPHA2_func1260->SetParError(2,1.048328e-05);
   ALPHA2_func1260->SetParLimits(2,0,0);
   ALPHA2_func1260->SetParameter(3,-7.482531e-08);
   ALPHA2_func1260->SetParError(3,7.32745e-09);
   ALPHA2_func1260->SetParLimits(3,0,0);
   ALPHA2_func1260->SetParameter(4,2.570234e-11);
   ALPHA2_func1260->SetParError(4,2.910577e-12);
   ALPHA2_func1260->SetParLimits(4,0,0);
   ALPHA2_func1260->SetParameter(5,-5.092664e-15);
   ALPHA2_func1260->SetParError(5,6.582362e-16);
   ALPHA2_func1260->SetParLimits(5,0,0);
   ALPHA2_func1260->SetParameter(6,5.420185e-19);
   ALPHA2_func1260->SetParError(6,7.869907e-20);
   ALPHA2_func1260->SetParLimits(6,0,0);
   ALPHA2_func1260->SetParameter(7,-2.399543e-23);
   ALPHA2_func1260->SetParError(7,3.849375e-24);
   ALPHA2_func1260->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(ALPHA2_func1260);
   gre->Draw("p");
   
   TF1 *ALPHA2_func1261 = new TF1("ALPHA2_func","pol7",0,13000);
   ALPHA2_func1261->SetFillColor(19);
   ALPHA2_func1261->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   ALPHA2_func1261->SetMarkerColor(ci);
   ALPHA2_func1261->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   ALPHA2_func1261->SetLineColor(ci);
   ALPHA2_func1261->SetLineWidth(3);
   ALPHA2_func1261->SetChisquare(370.0439);
   ALPHA2_func1261->SetNDF(4);
   ALPHA2_func1261->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1261->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1261->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1261->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1261->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1261->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1261->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1261->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1261->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1261->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1261->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1261->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1261->SetParameter(0,38.72353);
   ALPHA2_func1261->SetParError(0,2.421785);
   ALPHA2_func1261->SetParLimits(0,0,0);
   ALPHA2_func1261->SetParameter(1,-0.1082614);
   ALPHA2_func1261->SetParError(1,0.00789384);
   ALPHA2_func1261->SetParLimits(1,0,0);
   ALPHA2_func1261->SetParameter(2,0.000124605);
   ALPHA2_func1261->SetParError(2,1.048328e-05);
   ALPHA2_func1261->SetParLimits(2,0,0);
   ALPHA2_func1261->SetParameter(3,-7.482531e-08);
   ALPHA2_func1261->SetParError(3,7.32745e-09);
   ALPHA2_func1261->SetParLimits(3,0,0);
   ALPHA2_func1261->SetParameter(4,2.570234e-11);
   ALPHA2_func1261->SetParError(4,2.910577e-12);
   ALPHA2_func1261->SetParLimits(4,0,0);
   ALPHA2_func1261->SetParameter(5,-5.092664e-15);
   ALPHA2_func1261->SetParError(5,6.582362e-16);
   ALPHA2_func1261->SetParLimits(5,0,0);
   ALPHA2_func1261->SetParameter(6,5.420185e-19);
   ALPHA2_func1261->SetParError(6,7.869907e-20);
   ALPHA2_func1261->SetParLimits(6,0,0);
   ALPHA2_func1261->SetParameter(7,-2.399543e-23);
   ALPHA2_func1261->SetParError(7,3.849375e-24);
   ALPHA2_func1261->SetParLimits(7,0,0);
   ALPHA2_func1261->Draw("Csame");
   
   Double_t _fx1261[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1261[13] = {
   1.558305,
   1.23341,
   1.324735,
   1.769253,
   2.24318,
   2.078723,
   2.168886,
   2.8,
   2.8,
   2.8,
   2.8,
   2.8,
   2.8};
   Double_t _fex1261[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1261[13] = {
   0.03781321,
   0.02740223,
   0.02947852,
   0.0486797,
   0.0608285,
   0.05739583,
   0.06388723,
   0.07776884,
   0.02952035,
   0.04451729,
   0.06188705,
   0.01906322,
   0.06279815};
   gre = new TGraphErrors(13,_fx1261,_fy1261,_fex1261,_fey1261);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1261 = new TH1F("Graph_Graph1261","",100,550,5950);
   Graph_Graph1261->SetMinimum(1.038831);
   Graph_Graph1261->SetMaximum(3.044945);
   Graph_Graph1261->SetDirectory(0);
   Graph_Graph1261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1261->SetLineColor(ci);
   Graph_Graph1261->GetXaxis()->SetLabelFont(42);
   Graph_Graph1261->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1261->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1261->GetXaxis()->SetTitleFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1261->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1261->GetYaxis()->SetTitleFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1261->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1261->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1261);
   
   
   TF1 *ALPHA2_func1262 = new TF1("ALPHA2_func","pol7",1000,5500);
   ALPHA2_func1262->SetBit(TF1::kNotDraw);
   ALPHA2_func1262->SetFillColor(19);
   ALPHA2_func1262->SetFillStyle(0);
   ALPHA2_func1262->SetLineColor(2);
   ALPHA2_func1262->SetLineWidth(2);
   ALPHA2_func1262->SetChisquare(52.24359);
   ALPHA2_func1262->SetNDF(5);
   ALPHA2_func1262->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1262->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1262->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1262->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1262->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1262->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1262->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1262->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1262->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1262->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1262->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1262->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1262->SetParameter(0,51.84564);
   ALPHA2_func1262->SetParError(0,5.144803);
   ALPHA2_func1262->SetParLimits(0,0,0);
   ALPHA2_func1262->SetParameter(1,-0.1465964);
   ALPHA2_func1262->SetParError(1,0.01560064);
   ALPHA2_func1262->SetParLimits(1,0,0);
   ALPHA2_func1262->SetParameter(2,0.0001697563);
   ALPHA2_func1262->SetParError(2,1.904271e-05);
   ALPHA2_func1262->SetParLimits(2,0,0);
   ALPHA2_func1262->SetParameter(3,-1.023588e-07);
   ALPHA2_func1262->SetParError(3,1.21399e-08);
   ALPHA2_func1262->SetParLimits(3,0,0);
   ALPHA2_func1262->SetParameter(4,3.512792e-11);
   ALPHA2_func1262->SetParError(4,4.381685e-12);
   ALPHA2_func1262->SetParLimits(4,0,0);
   ALPHA2_func1262->SetParameter(5,-6.904886e-15);
   ALPHA2_func1262->SetParError(5,9.002083e-16);
   ALPHA2_func1262->SetParLimits(5,0,0);
   ALPHA2_func1262->SetParameter(6,7.232997e-19);
   ALPHA2_func1262->SetParError(6,9.802413e-20);
   ALPHA2_func1262->SetParLimits(6,0,0);
   ALPHA2_func1262->SetParameter(7,-3.128135e-23);
   ALPHA2_func1262->SetParError(7,4.386998e-24);
   ALPHA2_func1262->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(ALPHA2_func1262);
   gre->Draw("p");
   
   TF1 *ALPHA2_func1263 = new TF1("ALPHA2_func","pol7",0,13000);
   ALPHA2_func1263->SetFillColor(19);
   ALPHA2_func1263->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   ALPHA2_func1263->SetMarkerColor(ci);
   ALPHA2_func1263->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   ALPHA2_func1263->SetLineColor(ci);
   ALPHA2_func1263->SetLineWidth(3);
   ALPHA2_func1263->SetChisquare(52.24359);
   ALPHA2_func1263->SetNDF(5);
   ALPHA2_func1263->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1263->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1263->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1263->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1263->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1263->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1263->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1263->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1263->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1263->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1263->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1263->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1263->SetParameter(0,51.84564);
   ALPHA2_func1263->SetParError(0,5.144803);
   ALPHA2_func1263->SetParLimits(0,0,0);
   ALPHA2_func1263->SetParameter(1,-0.1465964);
   ALPHA2_func1263->SetParError(1,0.01560064);
   ALPHA2_func1263->SetParLimits(1,0,0);
   ALPHA2_func1263->SetParameter(2,0.0001697563);
   ALPHA2_func1263->SetParError(2,1.904271e-05);
   ALPHA2_func1263->SetParLimits(2,0,0);
   ALPHA2_func1263->SetParameter(3,-1.023588e-07);
   ALPHA2_func1263->SetParError(3,1.21399e-08);
   ALPHA2_func1263->SetParLimits(3,0,0);
   ALPHA2_func1263->SetParameter(4,3.512792e-11);
   ALPHA2_func1263->SetParError(4,4.381685e-12);
   ALPHA2_func1263->SetParLimits(4,0,0);
   ALPHA2_func1263->SetParameter(5,-6.904886e-15);
   ALPHA2_func1263->SetParError(5,9.002083e-16);
   ALPHA2_func1263->SetParLimits(5,0,0);
   ALPHA2_func1263->SetParameter(6,7.232997e-19);
   ALPHA2_func1263->SetParError(6,9.802413e-20);
   ALPHA2_func1263->SetParLimits(6,0,0);
   ALPHA2_func1263->SetParameter(7,-3.128135e-23);
   ALPHA2_func1263->SetParError(7,4.386998e-24);
   ALPHA2_func1263->SetParLimits(7,0,0);
   ALPHA2_func1263->Draw("Csame");
   
   Double_t _fx1263[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1263[13] = {
   1.445133,
   1.154047,
   1.256665,
   1.633644,
   2.054894,
   1.954233,
   2.06396,
   2.557663,
   2.752899,
   2.676752,
   2.701451,
   2.8,
   2.581521};
   Double_t _fex1263[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1263[13] = {
   0.01028142,
   0.008019516,
   0.008632696,
   0.01273585,
   0.01483884,
   0.0148041,
   0.01683984,
   0.02536381,
   0.02937665,
   0.03109532,
   0.09816396,
   0.07029893,
   0.0716641};
   gre = new TGraphErrors(13,_fx1263,_fy1263,_fex1263,_fey1263);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1263 = new TH1F("Graph_Graph1263","",100,550,5950);
   Graph_Graph1263->SetMinimum(0.9736002);
   Graph_Graph1263->SetMaximum(3.042726);
   Graph_Graph1263->SetDirectory(0);
   Graph_Graph1263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1263->SetLineColor(ci);
   Graph_Graph1263->GetXaxis()->SetLabelFont(42);
   Graph_Graph1263->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1263->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1263->GetXaxis()->SetTitleFont(42);
   Graph_Graph1263->GetYaxis()->SetLabelFont(42);
   Graph_Graph1263->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1263->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1263->GetYaxis()->SetTitleFont(42);
   Graph_Graph1263->GetZaxis()->SetLabelFont(42);
   Graph_Graph1263->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1263->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1263->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1263);
   
   
   TF1 *ALPHA2_func1264 = new TF1("ALPHA2_func","pol7",1000,5500);
   ALPHA2_func1264->SetBit(TF1::kNotDraw);
   ALPHA2_func1264->SetFillColor(19);
   ALPHA2_func1264->SetFillStyle(0);
   ALPHA2_func1264->SetLineColor(2);
   ALPHA2_func1264->SetLineWidth(2);
   ALPHA2_func1264->SetChisquare(279.6977);
   ALPHA2_func1264->SetNDF(5);
   ALPHA2_func1264->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1264->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1264->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1264->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1264->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1264->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1264->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1264->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1264->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1264->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1264->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1264->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1264->SetParameter(0,63.87248);
   ALPHA2_func1264->SetParError(0,1.994449);
   ALPHA2_func1264->SetParLimits(0,0,0);
   ALPHA2_func1264->SetParameter(1,-0.1878058);
   ALPHA2_func1264->SetParError(1,0.006318776);
   ALPHA2_func1264->SetParLimits(1,0,0);
   ALPHA2_func1264->SetParameter(2,0.000225861);
   ALPHA2_func1264->SetParError(2,8.1004e-06);
   ALPHA2_func1264->SetParLimits(2,0,0);
   ALPHA2_func1264->SetParameter(3,-1.41909e-07);
   ALPHA2_func1264->SetParError(3,5.446563e-09);
   ALPHA2_func1264->SetParLimits(3,0,0);
   ALPHA2_func1264->SetParameter(4,5.073659e-11);
   ALPHA2_func1264->SetParError(4,2.077712e-12);
   ALPHA2_func1264->SetParLimits(4,0,0);
   ALPHA2_func1264->SetParameter(5,-1.037075e-14);
   ALPHA2_func1264->SetParError(5,4.509771e-16);
   ALPHA2_func1264->SetParLimits(5,0,0);
   ALPHA2_func1264->SetParameter(6,1.126805e-18);
   ALPHA2_func1264->SetParError(6,5.176445e-20);
   ALPHA2_func1264->SetParLimits(6,0,0);
   ALPHA2_func1264->SetParameter(7,-5.040623e-23);
   ALPHA2_func1264->SetParError(7,2.433953e-24);
   ALPHA2_func1264->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(ALPHA2_func1264);
   gre->Draw("p");
   
   TF1 *ALPHA2_func1265 = new TF1("ALPHA2_func","pol7",0,13000);
   ALPHA2_func1265->SetFillColor(19);
   ALPHA2_func1265->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   ALPHA2_func1265->SetMarkerColor(ci);
   ALPHA2_func1265->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   ALPHA2_func1265->SetLineColor(ci);
   ALPHA2_func1265->SetLineWidth(3);
   ALPHA2_func1265->SetChisquare(279.6977);
   ALPHA2_func1265->SetNDF(5);
   ALPHA2_func1265->GetXaxis()->SetLabelFont(42);
   ALPHA2_func1265->GetXaxis()->SetLabelOffset(0.007);
   ALPHA2_func1265->GetXaxis()->SetLabelSize(0.05);
   ALPHA2_func1265->GetXaxis()->SetTitleSize(0.06);
   ALPHA2_func1265->GetXaxis()->SetTitleOffset(0.9);
   ALPHA2_func1265->GetXaxis()->SetTitleFont(42);
   ALPHA2_func1265->GetYaxis()->SetLabelFont(42);
   ALPHA2_func1265->GetYaxis()->SetLabelOffset(0.007);
   ALPHA2_func1265->GetYaxis()->SetLabelSize(0.05);
   ALPHA2_func1265->GetYaxis()->SetTitleSize(0.06);
   ALPHA2_func1265->GetYaxis()->SetTitleOffset(1.25);
   ALPHA2_func1265->GetYaxis()->SetTitleFont(42);
   ALPHA2_func1265->SetParameter(0,63.87248);
   ALPHA2_func1265->SetParError(0,1.994449);
   ALPHA2_func1265->SetParLimits(0,0,0);
   ALPHA2_func1265->SetParameter(1,-0.1878058);
   ALPHA2_func1265->SetParError(1,0.006318776);
   ALPHA2_func1265->SetParLimits(1,0,0);
   ALPHA2_func1265->SetParameter(2,0.000225861);
   ALPHA2_func1265->SetParError(2,8.1004e-06);
   ALPHA2_func1265->SetParLimits(2,0,0);
   ALPHA2_func1265->SetParameter(3,-1.41909e-07);
   ALPHA2_func1265->SetParError(3,5.446563e-09);
   ALPHA2_func1265->SetParLimits(3,0,0);
   ALPHA2_func1265->SetParameter(4,5.073659e-11);
   ALPHA2_func1265->SetParError(4,2.077712e-12);
   ALPHA2_func1265->SetParLimits(4,0,0);
   ALPHA2_func1265->SetParameter(5,-1.037075e-14);
   ALPHA2_func1265->SetParError(5,4.509771e-16);
   ALPHA2_func1265->SetParLimits(5,0,0);
   ALPHA2_func1265->SetParameter(6,1.126805e-18);
   ALPHA2_func1265->SetParError(6,5.176445e-20);
   ALPHA2_func1265->SetParLimits(6,0,0);
   ALPHA2_func1265->SetParameter(7,-5.040623e-23);
   ALPHA2_func1265->SetParError(7,2.433953e-24);
   ALPHA2_func1265->SetParLimits(7,0,0);
   ALPHA2_func1265->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("ALPHA2_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ALPHA2_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ALPHA2_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ALPHA2_func","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
